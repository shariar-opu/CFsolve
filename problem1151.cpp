#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,fib,n1,n2;
    n1=0;
    n2=1;
    cin>>n; 
    cout<<n1<<" "<<n2;
    for(int i=2;i<n;i++){
            fib=n1+n2;
            n1=n2;
            n2=fib;
          cout<<" "<<fib;
    }
}
   

