#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, m, p, q;
    cin >> n >> m >> p >> q;
    
    int gg = (n / p) * q;
    if(n % p == 0){
        if(gg == m) cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "YES\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}