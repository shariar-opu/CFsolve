#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int tc){
    int n, l, r;
    cin >> n >> l >> r;

    vector<int>ans;
    ans.push_back(l);

    for(int i = 2; i <= n; i++){
        if(l % i){
            int val = ((l / i) + 1) * i;
            if(val <= r) ans.push_back(val);
            else {
                cout << "NO\n";
                return;
            }
        }
        else ans.push_back(l);
    }

    cout << "YES\n";
    for(auto u : ans) cout << u << " ";
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}