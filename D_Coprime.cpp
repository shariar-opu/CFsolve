#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1000;

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i : arr) cin >> i;

    map<int, int> dist;
    for(int i = 0; i < n; i++){
        dist[arr[i]] = i + 1;
    }

    int ans = 0;
    for(auto i : dist){
        for(auto u : dist){
            if(__gcd(i.first, u.first) == 1) ans = max(ans, u.second + i.second);
        }
    }
    if(ans) cout << ans << endl;
    else cout << -1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}