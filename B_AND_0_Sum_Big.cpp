#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;
void solve(int tc){
    int n, k;   cin >> n >> k;
    ll ans = 1;
    for(int i = 0; i < k; i++){
        ans *= n;
        ans %= mod;
    }
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}