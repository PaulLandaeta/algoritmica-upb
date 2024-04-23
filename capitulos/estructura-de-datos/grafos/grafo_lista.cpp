#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    // Obtener el número de nodos del grafo.
    int numNodos;
    std::cin >> numNodos;

    vector<int> grafo[numNodos]; // Lista de adyacencia para representar el grafo. 
    
    // Obtener el número de aristas del grafo.
    int numAristas;
    cin >> numAristas;

    // Leer las aristas e insertarlas en la lista de adyacencia.
    for (int i = 0; i < numAristas; i++) {
        int nodoOrigen, nodoDestino;
        cin >> nodoOrigen >> nodoDestino;
        // Añadir el nodo destino a la lista del nodo origen para representar una arista.
        grafo[nodoOrigen].push_back(nodoDestino);
    }

    // Imprimir la lista de adyacencia del grafo.
    for (int i = 0; i < numNodos; i++) {
        // Imprimir cada nodo conectado al nodo 'i'.
        for (int j = 0; j < grafo[i].size(); j++) {
            cout << "[" << grafo[i][j] << "]";
        }
        cout << std::endl;
    }

    return 0; 
}