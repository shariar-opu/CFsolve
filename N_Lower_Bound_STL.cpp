#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<ll> arr(n);
    for(ll &i : arr) cin >> i;

    int q;  cin >> q;
    while(q--){
        ll x;  cin >> x;
        ll ans = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        if(arr[ans] == x) cout << "Yes " << ans + 1 << '\n';
        else cout << "No " << ans + 1 << '\n';
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}