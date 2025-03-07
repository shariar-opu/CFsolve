#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm(ll a, ll b){
    return (a * b) / __gcd(a, b);
}

int main(){
    ll n;   cin >> n;

    ll ans = 1e18, l = 0, r = 0, k = 0;
    for(ll i = 1; i * i <= n; i++){
        if(n % i == 0) {
            k = max(n / i, i);
            if(k < ans){
                ans = k;
                if(lcm(n / i, i) == n){
                    l = i, r = n / i;
                }
            }
        }
    }
    cout << l << " " << r << endl;
}