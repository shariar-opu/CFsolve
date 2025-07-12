#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int mod = 1e9 + 7;
vector<int> fact(107);

ll modulo_add(ll a, ll b, ll m){
    return ((a % m) + (b % m)) % m;
}

ll modulo_sub(ll a, ll b, ll m){
    return ((a % m) - (b % m)) % m;
}

ll modulo_mul(ll a, ll b, ll m){
    return ((a % m) * (b % m)) % m;
}
ll mul(ll a, ll b, ll m){ // efficient
    return __int128_t(a) * b % m;
}

ll binary_exponentiation(ll a, ll b, ll m){
    a %= m;
    ll res = 1;
    while(b > 0){
        if(b & 1) res = (res * a) % m;
        a = (a * a) % m;

        b >>= 1;
    }
    return res;
}

ll modulo_inverse(ll a, ll m){
    return binary_exponentiation(a, m - 2, m); // using farmats little theorum => a ^ (m - 1) = 1 (mod m);
}

ll modulo_div(ll a, ll b, ll m){
    return modulo_mul(a, modulo_inverse(b, m), m); // using farmats little theorum
}

ll nCr(ll n, ll r, ll m){
    return modulo_div(fact[n], modulo_mul(fact[r], fact[n - r], m), m); // n C r => n! / (r! * (n - r)!)
}

void fact_cal(){
    fact[0] = 1;
    for(int i = 1; i <= 100; i++){
        fact[i] = modulo_mul(fact[i - 1], i, mod);
    }
}


void solve(int tc){
    ll a, b;   cin >> a >> b;
    cout << modulo_add(a, b, mod) << endl;
    cout << modulo_sub(a, b, mod) << endl;
    cout << modulo_mul(a, b, mod) << endl;
    cout << modulo_div(a, b, mod) << endl;

    cout << binary_exponentiation(a, b, mod) << endl;
    cout << modulo_inverse(a, mod) << endl;
    cout << nCr(a, b, mod) << endl;

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    fact_cal();

    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}