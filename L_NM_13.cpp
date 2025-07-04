#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

ll gcd(ll a, ll b){
    if(a == 0) return b;
    if(b == 0) return a;
    if(a < b) swap(a, b);
    return gcd(a % b, b);
}

void solve(int tc){
    ll n;   cin >> n;
    vector<ll> arr(n);
    for(ll &i: arr) cin >> i;

    ll ans = arr[0];
    for(int i = 1; i < n; i++){
        ans = gcd(ans, arr[i]);
    }

    ll div = 1;
    for(ll i = 2; i * i <= ans; i++){
        ll res = 0;
        if(ans % i == 0){
            while(ans % i == 0){
                res ++;
                ans /= i;
            }
        }
        div *= (res + 1);
    }

    if(ans > 1) div <<= 1;

    cout << div << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}