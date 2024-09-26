#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a=0,g=0,d=0;
    for(int i=1;;i++){
        cin>>n;
        while(n>4){
            cin>>n;
        }
        if(n==1){
                ++a;
            }
            else if(n==2){
                ++g;
            }
            else if(n==3){
                ++d;
            }
            else if(n==4){
                break;
            }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<a<<endl<<"Gasolina: "<<g<<endl<<"Diesel: "<<d<<endl;
}