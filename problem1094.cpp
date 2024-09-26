#include<bits/stdc++.h>
using namespace std;
int main(){
    int ammount,n,coelho=0,rato=0,sapo=0,sum=0;
    char p='%';
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>ammount;
        char ch;
        cin>>ch;
        if(ch=='C'){
            coelho+=ammount;
            sum+=ammount;
        }
        else if(ch=='R'){
            rato+=ammount;
            sum+=ammount;
        }
        else if(ch=='S'){
            sapo+=ammount;
            sum+=ammount;
        }
        else{
            break;
        }
    }
    cout<<"Total: "<<sum<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<coelho<<endl;
    cout<<"Total de ratos: "<<rato<<endl;
    cout<<"Total de sapos: "<<sapo<<endl;
    float parc,parr,pars;
    parc=(float(coelho)/sum)*100;
    parr=(float(rato)/sum)*100;
    pars=(float(sapo)/sum)*100;
    cout<<"Percentual de coelhos: "<<fixed<<setprecision(2)<<parc<<" "<<p<<endl;
    cout<<"Percentual de ratos: "<<fixed<<setprecision(2)<<parr<<" "<<p<<endl;
    cout<<"Percentual de sapos: "<<fixed<<setprecision(2)<<pars<<" "<<p<<endl;
}
