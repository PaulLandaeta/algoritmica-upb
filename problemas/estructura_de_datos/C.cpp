#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    output;
    int s, b;
    while(cin >> s >> b && s && b) {
            vector<int> soldiers(s);
            for (int i = 0, j = 1; i < s; i++, j++) {
                soldiers[i] = j;
            }
            int leftOld=s;
            int rightOld=0;
            for (int i = 0; i < b; i++) {
                int l, r;   
                cin >> l >> r;
                if (leftOld <= l) {
                    l = leftOld;
                }

                if (rightOld > r) {
                    r = rightOld;
                }
                
                soldiers[l-1] = -1;
                soldiers[r-1] = -1;
                if (soldiers[0] == -1) {
                    cout << "* ";
                } else {
                    cout << to_string(soldiers[l-2]) << " ";
                }
                
                if (soldiers[s-1] == -1) {
                    cout << "*" << endl;
                } else {
                    cout << to_string(soldiers[r]) << endl;
                }
                leftOld = l;
                rightOld = r;                
            }
        cout<<"-"<<endl;
        
    }
    return 0;
}