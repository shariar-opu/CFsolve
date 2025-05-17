#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lg2(ll x){
    int res = 0;
    while(x > 1){
        x = (x + 1) / 2;
        res++;
    }
    return res;
}

void solve(int tc){
    ll n, m, a, b;
    cin >> n >> m >> a >> b;

    if(n - a + 1 < a) a = n - a + 1;
    if(m - b + 1 < b) b = m - b + 1;

    ll h = lg2(a) + lg2(m) + 1;
    ll v = lg2(b) + lg2(n) + 1;

    cout << min(h, v) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}