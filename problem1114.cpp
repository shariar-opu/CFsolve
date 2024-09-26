#include<iostream>
using namespace std;
int main(){
    int m;
    int n=2002;
    for(int i=0;;i++){
        cin>>m;
        if(n==m){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else{
            cout<<"Senha Invalida"<<endl;
        }
    }
}