#include<iostream>
using namespace std;
int main()
{
    int m,n;
   for(int i=0;;i++){
    cin>>m>>n;
    if(m>n){
     cout<<"Decrescente"<<endl;
    }
    else if(m<n){
        cout<<"Crescente"<<endl;
    }
    else{
        break;
    }

   } 
}