#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    ll n, k;   cin >> n >> k;
    ll gg = n - k;
    set<ll> st;
    for(ll i = 1; i * i <= gg; i++){
        if((gg) % i == 0){
            if(n % (gg/i) == k) st.insert(gg / i);
            if(n % i == k) st.insert(i);
        }
    }

    cout << "Case " << tc << ": ";
    if(st.empty()) cout << "impossible\n";
    else {
        for(auto u: st) cout << u << " ";
        cout << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}