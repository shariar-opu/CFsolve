#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=1;j<x;j++){
            if(x%j==0){
                sum+=j;
            }
        }
        if(sum==x){
            cout<<x<<" eh perfeito"<<endl;
            sum*=0;
        }
        else{
            cout<<x<<" nao eh perfeito"<<endl;
            sum*=0;
        }
    }
}