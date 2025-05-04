#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    vector<ll> ind, val;
    ll cnt = 0;
    for(int i = 1; i <= n; i++){
        ll a;   cin >> a;
        if(a < i){
            val.push_back(a);
            ind.push_back(i);
            cnt++;
        }
    }
    sort(ind.begin(), ind.end());
    sort(val.begin(), val.end());

    ll ans = 0;
    for(int i = 0; i < cnt; i++){
        int k = upper_bound(val.begin(), val.end(), ind[i]) - val.begin();
        ans += (cnt - k);
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