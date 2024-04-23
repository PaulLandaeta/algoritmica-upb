#include<bits/stdc++.h>

using namespace std;

#define input freopen("in.txt","r",stdin)
#define output freopen("out.txt","w",stdout)

int main() {
    input;
    output;
    int numCar;
    while(cin>>numCar && numCar) {
        vector<int> positions(numCar,0);
            bool noSolution = false;
            for(int i = 0; i < numCar; i++){
                int car, finalPos;
                cin>>car>>finalPos;

                if(i+finalPos >= numCar || i+finalPos < 0){
                    noSolution = true;
                    continue;
                }

                if(positions[i+finalPos] != 0){
                    noSolution = true;
                    continue;
                }

                positions[i+finalPos] = car;
                
            }
            if(noSolution){
                cout<<-1<<endl;
            }else {
                cout<<positions[0];
                for(int i=1; i< numCar; i++){
                    cout<<" "<<positions[i];
                }
                cout<<endl;
            }
 
    }
       
    return 0; 
}