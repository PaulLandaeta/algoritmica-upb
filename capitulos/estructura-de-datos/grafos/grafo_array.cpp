#include<bits/stdc++.h>

#include<iostream>

using namespace std;
int main() {
    int tamanho;
    cin>>tamanho; 
    int grafo[tamanho][tamanho];
    memset(grafo, 0, sizeof(grafo));
    int aristas; 
    cin>>aristas;
    for(int i = 0; i < aristas; i++ ) {
        int node1, nodo2;
        cin>>node1>>nodo2;
        grafo[node1][nodo2] = 1;
    }

    for(int i = 0; i < tamanho; i++) {
        for( int j = 0; j < tamanho; j++) {
            cout<<"["<<grafo[i][j]<<"]"; 
        }
        cout<<endl;
    }

    return 0; 
}