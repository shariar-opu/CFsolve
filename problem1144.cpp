#include<bits/stdc++.h>
using namespace std;
int main(){
     int n,i,j;
     double mul;
     cin>>n;
     for(int i=1;i<=n;i++){
      for(int j=1;j<=3;j++){
        mul=pow(i,j);
        cout<<mul<<" ";
    }
    for(int k=1;k<=3;k++){
            if(pow(i,k)!=i){
                mul=1+pow(i,j);
                cout<<mul<<" ";
            }
            cout<<endl;
        }
    cout<<endl;
    }
}