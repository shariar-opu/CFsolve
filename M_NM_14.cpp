#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll divOfK(ll n, ll k){
    return n / k;
}

ll divisors_l_to_r(ll lc, ll l, ll r){
    return divOfK(r, lc) - divOfK(l - 1, lc);
}

void solve(int tc){
    ll n, m, l, r;  cin >> n >> m >> l >> r;
    
    ll g = __gcd(n, m);
    if((long double)n / g > (long double)r / m){
        cout << 0 << endl;
        return;
    }
    ll lc = (n / g) * m;
    cout << divisors_l_to_r(lc, l, r) << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}