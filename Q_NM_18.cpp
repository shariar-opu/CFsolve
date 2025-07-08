#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

vector<ll> pf(ll x){
    vector<ll> v;
    ll tmp = x;
    for(int i = 2; i * i <= x; i++){
        if(x % i == 0){
            v.push_back(i);
            while(tmp % i == 0) tmp /= i;
        }
    }
    if(tmp > 1) v.push_back(tmp);

    return v;
} 
void solve(int tc){
    ll a, b;    cin >> a >> b;
    ll g = __gcd(a, b);
    vector<ll> pf_of_gcd = pf(g);
    cout << g << " " << pf_of_gcd.size() << endl;

    ll tmp = b;
    for(auto u: pf_of_gcd){
        if(tmp % u == 0) {
            while(tmp % u == 0) tmp /= u;
        }
        else {
            cout << "No\n";
            return;
        }
    }
    if(tmp > 1) {
        cout << "No\n";
        return;
    }

    cout << "Yes\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}