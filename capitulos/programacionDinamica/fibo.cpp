#include<bits/stdc++.h>

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
long long dp[100000];
long long fibo(long long n) {
    if(n <= 2 ) {
        return 1;
    }
    else {
        if(dp[n] == -1 ) { // aun no he calculado el valor de fibo (n)
            long long fibon = fibo(n-1) + fibo(n-2);
            dp[n] = fibon;
        }
        return dp[n];
    }
}


int main (){
    long long n = 60;
    memset(dp, -1, sizeof(dp));
    cout<<fibo(n)<<endl;

    /// BOTTOM UP 
    long long dp2[100000];
    // caso base o el mas pequeño 
    dp2[0] = 0;
    dp2[1] = 1;
    for (int i = 2; i<61 ; i++) {
        dp2[i] = dp2[i-1] + dp2[i-2];
    }
    cout<<dp2[60]<<endl;
    return 0;
}