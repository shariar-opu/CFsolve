#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    ll a, b;    cin >> a >> b;
    while(1){
        ll g = __gcd(a, b);
        if(g == 1) break;
        b /= g;
    }

    if(b > 1) cout << "No\n";
    else cout << "Yes\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}