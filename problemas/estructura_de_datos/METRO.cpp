#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    int stations, aliceHome;
    cin>>stations>>aliceHome;
    vector<int> stations1(stations);
    vector<int> stations2(stations);
    for (int i = 0; i < stations; i++)
    {
        cin>>stations1[i];
    }
    for (int i = 0; i < stations; i++)
    {
        cin>>stations2[i];
    }
    if(stations1[0] == 0){
        cout<<"NO"<<endl;
        return 0;
    }
    if(stations1[aliceHome-1] == 1){
        cout<<"YES"<<endl;
        return 0;
    }
    if(stations1[aliceHome-1] == 1){
        cout<<"YES"<<endl;
        return 0;
    }
    if(stations2[aliceHome-1] == 0 && stations1[aliceHome-1] == 0){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = aliceHome; i < stations; i++){
        if(stations1[i] == 1 && stations2[i] == 1){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;

    return 0;
}