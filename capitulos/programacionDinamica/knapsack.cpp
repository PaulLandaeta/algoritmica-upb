#include<bits/stdc++.h>

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int w[4] = { 1, 3, 3, 10};
int g[4] = { 1000, 1500, 500, 3000};
int n = 4;

void bu() {
    int dp2[1000][1000];
    memset(dp2, 0, sizeof(dp2));

    for(int i = 1; i <= n; i++) { // objetos 
        for(int j = 15; j >= 1; j--) { // peso de la mochila
            // cout<<i <<" "<< j<<endl;
            if( w[i-1] <= j ) {
                dp2[i][j] = max(g[i-1]+ dp2[i-1][j-w[i-1]], dp2[i-1][j]);
            } else {
                dp2[i][j] = dp2[i-1][j];
            }
            
        } 
    }
    for (int i = 0 ; i<= n;i++) {
        for (int j = 0 ; j<= 15; j++) {
            cout<<"["<<dp2[i][j]<<"]";
        }
        cout<<endl;
    }
}


int main (){
    // memset(dp, -1, sizeof(dp));
    // cout<<f(0,15)<<endl;
    bu();
}