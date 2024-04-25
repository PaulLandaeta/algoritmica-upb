#include <bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
vector<string> grafo(1000);
int vis[1000][1000];
// arriba, abajo, derecha, izq,
// arriba derecha, arriba izq, abajo dere, aba izq,
int vx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int vy[] = {0, 0, 1, -1, 1, -1, 1, -1};
int dfs(int fila, int columna)
{
    vis[fila][columna] = true;
    for (int i = 0; i < 8; i++)
    {
        int nuevaFila = fila + vx[i];
        int nuevaColumna = columna + vy[i];
        if (nuevaFila >= 0 && nuevaFila <= 3 
            && nuevaColumna >= 0 && nuevaColumna <= 4 
            && grafo[nuevaFila][nuevaColumna] == '1')
        {
            if (!vis[nuevaFila][nuevaColumna])
            {
                dfs(nuevaFila, nuevaColumna);
            }
        }
    }
}

int main()
{
    int filas, columnas;
    cin >> filas >> columnas;
    memset(vis, 0, sizeof vis);
    for (int i = 0; i < filas; i++)
    {
        cin >> grafo[i]; // fila 0 ->> 11...
    }
    int contIslas = 0;
    for (int i = 0; i < filas; i++)
    {
        for (int j = 0; j < columnas; j++)
        {
            if (!vis[i][j] && grafo[i][j] == '1')
            {
                dfs(i, j);
                contIslas++;
            }
        }
    }
}