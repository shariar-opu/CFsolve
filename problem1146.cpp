#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    for(int i=1;;i++){
        cin>>x;
        if(x==0){
            break;
        }
        else{
            cout<<1;
            for(int j=2;j<=x;j++){
                cout<<" "<<j;
            }
        }
        cout<<endl;
    }
    
}