#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    ll x;  cin >> x;

    ll a, b, mn = 1e18;
    for(ll i = 1; i * i <= x; i++) {
        if(x % i == 0){
            ll mx = max(i, x / i);
            if(__gcd(i, (x / i)) == 1 && mn > mx) {
                mn = mx;
                a = i, b = x / i;
            }
        }
    }

    cout << a << " " << b << '\n';

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}