#include<bits/stdc++.h>
using namespace std;
int main() {
    stack<int> pilita; 
    cout<<pilita.empty()<<endl;
    
    pilita.push(10);
    cout<<pilita.empty()<<endl;
    cout<<pilita.top()<<endl;
    cout<<pilita.empty()<<endl;
    cout<<pilita.pop()<<endl;
    cout<<pilita.empty()<<endl;
} 