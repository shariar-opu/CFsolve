#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, k;   cin >> n >> k;
    map<ll, int> mp;
    for(int i = 0; i < n; i++){
        ll a;  cin >> a;
        mp[a % k]++;
    }

    ll ans = 0;
    for(auto u : mp){
        if(!u.first) ans++;
        else if(u.first == (k - u.first)) ans++;
        else if(u.first < k - u.first && mp.find(k - u.first) != mp.end()){
            ans++;
            int dif = abs(u.second - mp[k - u.first]);
            if(dif > 1) ans += (dif - 1);
        }
        else if(mp.find(k - u.first) == mp.end()) ans += u.second;
    }
    cout << ans << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}