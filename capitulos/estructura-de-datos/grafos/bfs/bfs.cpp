#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

bool vis[10000];
vector<int> grafo[10000];
int niveles[10000];
void bfs (int nodoInicial) {
    queue<int> colita;
    colita.push(nodoInicial);
    niveles[nodoInicial] = 0;
    while(!colita.empty()){ // La pilita no esta vacia ????
        int nodoActual = colita.front(); // obtener el primer elemento de la pila

        colita.pop();
        if(!vis[nodoActual]) {
            vis[nodoActual] = true; // Marco como visitado al nodo actual
            // empezar a visitar a sus amigos 
            for(int i = 0; i < grafo[nodoActual].size(); i++ ){
                int amigo = grafo[nodoActual][i]; // vecino o amigo
                niveles[amigo] = niveles[nodoActual] + 1;
                if(!vis[amigo]) { // El amigo no ha sido visitado ?
                    colita.push(amigo);
                } 
            }   
        }
    }
}


int main() {
    input;
    int nodos, aristas;
    cin>>nodos>>aristas; // 11 19
    for(int i = 0 ; i < aristas; i++ ) {
        int nodoInicial, nodoFinal;
        cin>>nodoInicial>>nodoFinal;
        grafo[nodoInicial].push_back(nodoFinal);
    }
    // Si el nodo S puede llegar al nodo T
    int S,T; // 1 7
    cin>>S>>T;
    bfs(S);
    if(vis[T]) { // logre visitar el 7 
        cout<<"Si lo podria conocer"<<endl;
    } else {
        cout<<"No lo podria conocer"<<endl;
    }
}