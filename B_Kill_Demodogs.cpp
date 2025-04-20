#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int mod = 1e9 + 7;
ll pw(ll a, ll b){
    a %= mod;
    ll r = 1;
    while(b > 0){
        if(b & 1) r = (r * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return r;
}

ll sq(ll n){
    ll ans = (((n * (n + 1)) % mod) * (2 * n + 1) % mod) % mod;
    ans = (ans * pw(6, mod - 2)) % mod;
    return ans;
}

ll lin(ll n){
    ll ans = (n * (n + 1)) % mod;
    ans = (ans * pw(2, mod - 2)) % mod;
    return ans;
}

void solve(int tc){
    ll n;  cin >> n;

    ll ans = sq(n) % mod;
    ans = (ans + sq(n - 1)) % mod;
    ans = (ans + lin(n - 1)) % mod;
    ans = (ans * 2022) % mod;

    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}