#include<bits/stdc++.h>

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

typedef pair<int, int> pii; // Usamos pares para representar el peso y el nodo

const int INF = numeric_limits<int>::max(); // Definimos infinito como el máximo valor de un entero

void dijkstra(int start, vector<vector<pii> >& adj, vector<int>& dist) {
    priority_queue<pii, vector<pii>, greater<pii> > pq; // Min-heap para obtener el mínimo peso rápidamente
    pq.push(make_pair(0, start)); // Iniciamos con el nodo de inicio
    dist[start] = 0;

    while (!pq.empty()) {
        int current_node = pq.top().second;
        int current_distance = pq.top().first;
        pq.pop();

        // Si la distancia actual no es relevante, la saltamos
        if (current_distance > dist[current_node]) continue;

        // Revisamos los nodos adyacentes
        for (int i = 0; i < adj[current_node].size(); i++) {
            int next_node = adj[current_node][i].second;
            int weight = adj[current_node][i].first;
            int next_distance = current_distance + weight;

            // Actualizamos la distancia si encontramos un camino más corto
            if (next_distance < dist[next_node]) {
                dist[next_node] = next_distance;
                pq.push(make_pair(next_distance, next_node));
            }
        }
    }
}

int main() {
    input;
    int n, m;
    cout << "Ingrese el número de nodos (n) y aristas (m): ";
    cin >> n >> m;

    vector<vector<pii> > adj(n); // Lista de adyacencia para el grafo
    vector<int> dist(n, INF); // Vector de distancias inicializadas a infinito

    cout << "Ingrese las aristas en formato (inicio fin peso):" << endl;
    for (int i = 0; i < m; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(w, v)); // Asume que el grafo es dirigido
        // Para un grafo no dirigido, agregar también adj[v].push_back({w, u});
    }

    int start;
    cout << "Ingrese el nodo de inicio: ";
    cin >> start;

    dijkstra(start, adj, dist);

    cout << "Distancias más cortas desde el nodo " << start << ":" << endl;
    for (int i = 0; i < n; i++) {
        if (dist[i] == INF)
            cout << "Nodo " << i << ": no se puede alcanzar" << endl;
        else
            cout << "Nodo " << i << ": " << dist[i] << endl;
    }

    return 0;
}
