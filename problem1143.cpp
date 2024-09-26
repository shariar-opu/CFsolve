#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     double mul;
     cin>>n;
     for(int i=1;i<=n;i++){
      cout<<i;
      for(int j=2;j<=3;j++){
         mul=pow(i,j);
         cout<<" "<<mul;
      }
   cout<<endl;
     }
}