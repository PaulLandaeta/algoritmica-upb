#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grafo[10000];

void dfs(int nodoInicial) {
    stack<int> pilita;
    pilita.push(nodoInicial);
    while(!pilita.empty()) {
        int nodoActual = pilita.top();
        pilita.pop();
        if(!vis[nodoActual]) {
            vis[nodoActual] = true;
        }
        for(int i = 0 ; i < grafo[nodoActual].size(); i++) {
            int vecino = grafo[nodoActual][i];
            if(!vis[vecino]) {
                pilita.push(vecino);
            }
        }
    }
}

int main() {
    input;
    int nroNodos, nroAristas;
    cin>>nroNodos>>nroAristas;
    for(int i = 0 ; i< nroAristas; i++) {
        int nodoInicio, nodoFinal;
        cin>>nodoInicio>>nodoFinal;
        grafo[nodoInicio].push_back(nodoFinal); // arista de ida
        grafo[nodoFinal].push_back(nodoInicio); // arista de vuelta
    }
    int contGroups = 0;
    for (int i = 1 ; i <= nroNodos; i++) {
        if(!vis[i]) {
            contGroups++;
            dfs(i);
        }
    }
    cout<<"Nro de Grupos es: "<< contGroups<<endl;
    return 0;
}