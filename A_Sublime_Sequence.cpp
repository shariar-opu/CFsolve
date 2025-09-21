#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int x, n;   cin >> x >> n;

    int ans = 0;
    for(int i = 0; i < n; i++) {
        if(i & 1) ans -= x;
        else ans += x;
    }

    cout << ans << '\n';

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}