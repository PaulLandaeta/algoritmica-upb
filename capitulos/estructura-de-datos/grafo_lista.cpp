#include<bits/stdc++.h>
using namespace std;
int main() {
 
    vector<int> grafo[5];
    int tamanho;
    cin>> tamanho;
    int aristas;
    cin>>aristas;
    for(int i = 0 ; i < aristas; i++) {
        int node1,node2;
        cin>>node1>>node2;
        grafo[node1].push_back(node2);
    }
 
    for(int i = 0; i < tamanho; i++) {
        for( int j = 0; j < grafo[i].size() ; j++) {
            cout<<"["<<grafo[i][j]<<"]"; 
        }
        cout<<endl;
    }
    return 0; 
}