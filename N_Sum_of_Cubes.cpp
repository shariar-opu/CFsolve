#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool bs(ll x){
    set<ll> pre;
    for(ll i = 1; i <= 10000; i++){
       pre.insert(i * i * i);
    }
    for(auto u : pre){
        if(pre.find(x - u) != pre.end()) return 1;
    }
    return 0;

}

void solve(int tc){
    ll x;  cin >> x;
    bs(x)? cout << "YES\n" : cout << "NO\n";
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    for(int tc = 1; tc <= t; tc++) solve(tc);
    return 0;
}