#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    // input;
    output;
    list<int> listita; 
    listita.push_back(1);
    listita.push_back(2);
    listita.push_back(3);
    list<int>::iterator it;

    it = listita.end();
    cout << *it << endl;
    
    for (it = listita.begin(); it != listita.end(); it++) {
        cout << *it << endl;
    }

    return 0;
}