#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, sum = 0 ;  cin >> n;

    for(int i = 1; i <= n / 2; i++){
        sum += i;
    }
    ll ans = sum * 1ll * 2 + 1;
    if(n & 1) cout << ans << endl;
    else cout << ans - n / 2 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}