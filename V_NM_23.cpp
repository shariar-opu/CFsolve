#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll modulo_mul(ll a, ll b, ll m){
    return __int128_t(a) * b % m;
}

ll binary_exponentiation(ll a, ll b, ll m){
    a %= m;
    ll res = 1; 
    while(b > 0){
        if(b & 1) res = modulo_mul(res, a, m);
        a = modulo_mul(a, a, m);
        b >>= 1;
    }
    return res;
}

ll modulo_inverse(ll a, ll m){
    return binary_exponentiation(a, m - 2, m);
}

ll modulo_div(ll a, ll b, ll m){
    return modulo_mul(a, modulo_inverse(b, m), m);
}

void solve(int tc){
    ll a, b, m;     cin >> a >> b >> m;

    cout << binary_exponentiation(a, b, m) << endl;
    cout << modulo_mul(a, b, m) << endl;
    cout << modulo_div(a, b, m) << endl;

    //time complexity: O(1)
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}