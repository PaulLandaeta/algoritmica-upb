#include <bits/stdc++.h>

using namespace std;

#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)

int main() {
    queue<int> vip;
    queue<int> general;
    queue<int> preferencial;
    vector<int> cancelados(10000, 0);
    int q; 
    cin>>q;
    string tipo;
    while(q--) {
        cin>>tipo;
        if(tipo == "ARRIVE"){
            // logica cuando llegan 
            int id;
            string type; 
            cin>>id>>type;
            if(type == "VIP") {
                vip.push(id);
            } else if( type == "GENERAL") {
                general.push(id);
            } else {
                preferencial.push(id);
            }
        } else if (tipo == "ENTER") {
            // logica cuando entrar 
            // empezar por vip 
            // luego preferencial 
            // y por ultimo general
            bool entro = false;
            while(!vip.empty()) {
                int person = vip.front();
                vip.pop();
                if(!cancelados[person]){
                    cout<<person<<endl;
                    entro = true;
                    break;
                }
            }
             while(!preferencial.empty() && !entro) {
                int person = preferencial.front();
                preferencial.pop();
                if(!cancelados[person]){
                    cout<<person<<endl;
                    entro = true;
                    break;
                }
            }
             while(!general.empty() && !entro) {
                int person = general.front();
                general.pop();
                if(!cancelados[person]){
                    cout<<person<<endl;
                    entro = true;
                    break;
                }
            }
            if(!entro) {
                cout<<"NONE"<<endl;
            }
        } else {    
            // logica cuando cancelan
            int id;
            cin>>id;
            cancelados[id] = true;
        }

    }
}