#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n,k;    cin >> n >> k;
        if(n&1){
            if(k&1)cout<<"YES\n";
            else cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}