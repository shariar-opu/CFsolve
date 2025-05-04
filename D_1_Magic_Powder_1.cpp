#include<bits/stdc++.h>
using namespace std;
#define ll long long
int n, k;
vector<ll> a, b;

bool calc(ll x){
    ll magic = k;
    for(int i = 0; i < n; i++){
        ll r = a[i] * 1LL * x;
        if(r > b[i]){
            magic -= (r - b[i]);
        }
        if(magic < 0) return false;
    }
    return true;
}

void solve(int tc){
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    for(ll &i : a) cin >> i;
    for(ll &i : b) cin >> i;

    ll l = 0, r = 1e9, ans = 0;
    while(r - l >= 0){
        ll mid = (l + r) / 2;
        // cout << l << " , " << r << " -> " << mid << '\n';
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
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}