#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    optimize();
    
    int tc;
    cin>>tc;
    for(int i=0;i<tc;i++){
        int o=0,ot=0;
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            int a;
            cin>>a;
            if(a==1){
                o++;
            }else if(a!=1){
                ot++;
            }
        }
        
        if(o%2==0){
                cout<<(o/2)+ot<<endl;
        }else if(o==1){
            
            cout<<o+ot<<endl;
            
        }else{
            int z;
            z=o/2;
            cout<<z+1+ot<<endl;
        }
        
    }
   
    return 0;
}