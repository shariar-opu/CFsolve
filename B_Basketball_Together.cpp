#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, d;   cin >> n >> d;
    vector<ll> powers(n);
    for(ll &i : powers) cin >> i;

    sort(powers.rbegin(), powers.rend());

    ll tmp = n, ans = 0;
    for(int i = 0; i < n; i++){
        tmp -= (d/powers[i] + 1);

        if(tmp <= 0) {
            cout << ans << endl;
            return;
        }
        ans++;
    }
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;  //cin >> t;
    while(t--){
        solve();
    }
}