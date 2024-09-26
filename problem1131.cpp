#include<bits/stdc++.h>
using namespace std;
int in=0,d=0,g=0;
int goal(int a,int b){
    if(a>b){
        return ++in;
    }
    else if(a==b){
        return ++d;
    }
    else{
        return ++g;
    }
}
int main()
{
    int n,x,y,i=0;
    do{
        cin>>x>>y;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>n;
        goal(x,y);
        ++i;
    }
    while(n!=2);
    cout<<i<<" grenais"<<endl;
    cout<<"Inter:"<<in<<endl;
    cout<<"Gremio:"<<g<<endl;
    cout<<"Empates:"<<d<<endl;
    if(in>g){
        cout<<"Inter venceu mais"<<endl;
    }
    else if(in==g){
        cout<<"Não houve vencedor"<<endl;
    }
    else{
        cout<<"Gremio venceu mais"<<endl;
    }
}
