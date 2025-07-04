#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

set<ll> pf(ll b){
    set<ll> st;
    for(ll i = 2; i * i <= b; i++){
        if(b % i == 0){
            while(b % i == 0){
                st.insert(i);
                b /= i;
            }
        }
    }
    if(b > 1) st.insert(b);
    return st;
}

void solve(int tc){
    ll a, b;    cin >> a >> b;
    set<ll> pf_a = pf(a);
    set<ll> pf_b = pf(b);

    // for(auto u: pf_b){
    //     if(pf_a.find(u) == pf_a.end()){
    //         cout << "No\n";
    //         return;
    //     }
    // }
    // cout << "Yes\n";
    for(auto u: pf_a) cout << u << " ";
    cout << endl;
    for(auto u: pf_b) cout << u << " ";
    cout << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}