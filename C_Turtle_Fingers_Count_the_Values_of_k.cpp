#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    int t;  cin>>t;
    while(t--){
        set<int>div;
        int a,b,val;    cin>>a>>b>>val;
        int x=1;
        for(int i=0; i<20;i++) {
            if(x>val)break;
            int y=1;
            for(int j=0;j<20;j++){
                if(x*y>val)break;
                if(val%(x*y) == 0){
                    div.insert(val/(x*y));
                }
                y*=b;
            }
            x*=a;
        }
       cout << div.size() <<"\n";
    }
}
