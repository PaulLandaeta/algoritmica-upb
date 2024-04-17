#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<string> vectorcito(10,"Paul");
    vectorcito.push_back("Landaeta");
    // ["paul","paul","paul","paul","paul","paul","paul","paul","paul","paul"]
    cout<<"tamaño del vector"<< vectorcito.size()<<endl;
    for(int i = 0 ; i < vectorcito.size() ; i++) {
    	cout<<i<<" "<< vectorcito[i]<<endl;
    }
    return 0;
}