#include <bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
vector<int> grafo[1010];
vector<int> vis(1010);
int cont = 0;
void dfs(int inicial) {
    vis[inicial] = true;
    cont++;
    for(int i  = 0; grafo[inicial].size();i++) {
        if(!vis[grafo[inicial][i]]) {
            dfs(grafo[inicial][i]);
        }
    }
}

int main() {
    int nroNodos,nroAristas;
    cin>>nroNodos>>nroAristas;
    for(int i = 0; i < nroAristas; i++) {
        int inicial, final;
        cin>>inicial>>final;
        grafo[inicial].push_back(final);
        grafo[final].push_back(inicial);
    }
    int cont = 0;
    dfs(1); 
    cout<<cont<<endl;
    int q;
    while(q--) {
        int inicial, final;
        for(int i = 0; i < nroNodos;i++ ){
            vis[i] = 0;
        }
        dfs(inicial);
        if(vis[final]) {
            cout<<"SI"<<endl;
        } else {
            cout<<"NO"<<endl;
        }
    }
}