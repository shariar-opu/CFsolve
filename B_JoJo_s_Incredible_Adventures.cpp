#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    string s;   cin >> s;
    int n = s.size();

    int one = 0, cnt = 0;
    for(auto u : s){
        cnt = (u == '1')? cnt + 1 : 0;
        one = max(one, cnt);
    }

    if(one == n){
        cout << one * 1LL * one << endl;
        return;
    }

    cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == '0') break;
        cnt++;
    }
    for(int i = n - 1; i >= 0; --i){
        if(s[i] == '0') break;
        cnt++;
    }

    cnt = min(cnt, n);
    one = max(cnt, one) + 1;

    ll ans = (one / 2) * 1LL * (one - (one / 2));
    cout << ans << endl; 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}