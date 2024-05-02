#include <bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)



int main() {
    map<int, vector<int> > grafo;
    grafo[10].push_back(15);
    grafo[15].push_back(10);
    grafo[15].push_back(20);

    // no hay ese elemento
    cout<<"para el 1"<<endl;
    for(int i = 0 ;i< grafo[1].size();i++) {
        cout<<grafo[1][i]<<endl;
    }
    // si hay
    cout<<"para el 10"<<endl;
    for(int i = 0 ;i< grafo[10].size();i++) {
        cout<<grafo[10][i]<<endl;
    }
    // si hay
    cout<<"para el 15"<<endl;
    for(int i = 0 ;i< grafo[15].size();i++) {
        cout<<grafo[15][i]<<endl;
    }
}
