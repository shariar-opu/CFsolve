#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    ll n;   cin >> n;

    ll ans = 0;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            ans = max(ans, i);
            while(n % i == 0){
                n /= i;
            }
        }
    }
    if(n > 1) ans = max(ans, n);

    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}