#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=4;j++){
            p++;
            if(i*4==p){
                cout<<"PUM";
                continue;
            }
            cout<<p<<" ";
        }
        cout<<endl;
    }
}