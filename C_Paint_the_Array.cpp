#include<bits/stdc++.h>
using namespace std;
#define ll long long 

ll gcd(ll a, ll b){
    if(!b) return a;
    return gcd(b, a % b);
}

void solve(int tc){
    ll n;   cin >> n;
    vector<ll>arr(n);
    for(ll &i : arr) cin >> i;
    ll d1 = arr[0], d2 = arr[1];
    for(int i = 2; i < n; i += 2){
        d1 = gcd(d1, arr[i]);
    }
    bool ok1 = 1, ok2 = 1;
    for(int i = 1; i < n; i += 2){
        d2 = gcd(d2, arr[i]);
        if(arr[i] % d1 == 0) ok1 = 0;
    }

    if(ok1){
        cout << d1 << endl;
        return;
    }

    for(int i = 0; i < n; i += 2){
        if(arr[i] % d2 == 0) ok2 = 0;
    }
    
    if(ok2){
        cout << d2 << endl;
        return;
    }
    
    cout << 0 << endl;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    for(int tc = 1; tc <= t; tc++) solve(tc);
}