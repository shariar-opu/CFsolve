#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>x;
        for(int j=1;j<=x;j++){
            if(x==j && x==1){
             if(x%j==0){
                 cout<<x<<" nao eh primo"<<endl;
                }
             else{
                 cout<<x<<" eh primo"<<endl;
                }

            }
        }
    }

}