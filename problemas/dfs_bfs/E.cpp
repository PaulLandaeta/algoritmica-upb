#include <bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
vector<string> grafo;

int vx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int vy[] = {-1, 0, 1, 1, 1, 0, -1, -1};
int filas, columnas;

void dfs(int fila, int columna)
{
    // solo va entrar al dfs si la celda tiene
    // color negro es decir #
    grafo[fila][columna] = '.';
    // visitamos las 8 direcciones
    for (int i = 0; i < 8; i++)
    {
        int nuevaFila = fila + vx[i];
        int nuevaColumna = columna + vy[i];
        if (nuevaFila >= 0 && nuevaColumna >= 0 && nuevaFila < filas && nuevaColumna < columnas && grafo[nuevaFila][nuevaColumna] == '#')
        {
            dfs(nuevaFila, nuevaColumna);
        }
    }
}

int main()
{
    input;

    while (cin >> filas >> columnas && filas != 0 || columnas != 0)
    {
        grafo.clear();
        for (int i = 0; i < filas; i++)
        {
            string fila;
            cin >> fila;
            grafo.push_back(fila);
        }
        int amebas = 0;
        for (int i = 0; i < filas; i++)
        {
            for (int j = 0; j < columnas; j++)
            {
                if (grafo[i][j] == '#')
                { // verificando si estoy en un punto negro
                    dfs(i, j);
                    amebas++;
                }
            }
        }
        cout << amebas << endl;
    }
}