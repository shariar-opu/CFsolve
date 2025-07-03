#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    ll n;  cin >> n;
    map<ll, ll> mp;
    for(int i = 0; i < n; i++){
        int a;  cin >> a;
        mp[a - i]++;
    }
    ll ans = 0;
    for(auto u : mp){
        if(u.second > 1){
            ll a = u.second * (u.second - 1);
            ans += a >> 1;
        }
    }
    cout << ans << "\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}