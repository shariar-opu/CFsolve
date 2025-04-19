#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;

void solve(int tc){
    long long n;  cin >> n;

    long long ans = ((n * n) + (n * (n - 1) + 2) * 1LL * 2022) % mod;
    cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}