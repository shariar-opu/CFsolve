#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll pw(ll a, ll b){
    ll res = 1;
    while(b > 0){
        if(b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

void solve(ll tc){
    ll n;  cin >> n;
    
    ll div = 1, divSum = 1, uniqe = 0, lpf = INT_MAX, gpf = INT_MIN, totPrimeF = 0;
    for(ll i = 2; i * i <= n; i++){
        ll res = 0;
        if(n % i == 0){
            lpf = min(lpf, i);
            gpf = max(gpf, i);
            uniqe ++;
            while(n % i == 0){
                res ++;
                totPrimeF ++;
                n /= i;
            }
            divSum *= (floor(pw(i, (res + 1)) - 1) / (i - 1));
            div *= (res + 1);
        }
    }
    if(n > 1) {
        div <<= 1;
        totPrimeF ++;
        uniqe ++;
        divSum *= (floor(pw(n, 2) - 1) / (n - 1));
        lpf = min(lpf, n);
        gpf = max(gpf, n);
    }

    cout << lpf << " " << gpf << " " << uniqe << " " << totPrimeF << " " << div << " " << divSum << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    ll t = 1;
    cin >> t;
    for(ll i = 1; i <= t; i++) solve(i);

    return 0;
}