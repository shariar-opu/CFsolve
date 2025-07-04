#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll largestPow(ll n, ll p){
    ll res = 0;
    while(n > 0){
        n /= p;
        res += n;
    }
    return res;
}

ll pw(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

void solve(int tc){
    ll m, n;    cin >> m >> n;

    ll ans = INT_MAX;
    for(int i = 2; i * i <= m; i++){
        int res = 0;
        if(m % i == 0){
            while(m % i == 0){
                res ++;
                m /= i;
            }
        }
        ans = min(ans, largestPow(n, i) / pw(i, res - 1));
    }
    if(m > 1) ans = min(ans, largestPow(n, m));

    cout << "Case " << tc << ": " << endl;
    if(ans == INT_MAX) cout << "Impossible to divide\n";
    else cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}