#include<bits/stdc++.h>
using namespace std;
int main(){
   int x,y,count=0;
   cin>>x>>y;
   for(int i=1;i<=y;i++){
      for(int j=1;j<=x;j++){
         ++count;
         cout<<count;
         if(count!=(i*x)){
            cout<<"-";
         }
      }
      if(count==y){
         break;
      }
   cout<<endl;
   }
   
}