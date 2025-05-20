#include<bits/stdc++.h>
using namespace std;
#define ll long long

vector<ll> arr;
ll n, c;

ll pw(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

bool calc(ll x){
    if(x > c) return false;
    ll res = 0;

    for(int i = 0; i < n; i++){
        res += pw(x * 1ll * 2 + arr[i], 2);

        if(res > c) return false;
    }
    return res <= c;
}

void solve(int tc){
    cin >> n >> c;
    arr.resize(n);
    for(ll &i : arr) cin >> i;

    ll l = 1, r = 1e9, ans = 0;
    while(r - l >= 0){
        ll mid = (r + l) / 2;
        // cout << l << " , " << r << " = " << mid << endl;
        if(calc(mid)){
            ans = mid;
            l = mid + 1;
        }
        else r = mid - 1;
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