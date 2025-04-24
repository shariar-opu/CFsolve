#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, x;   cin >> n >> x;
    vector<int> ans;

    if(n == 1){
        cout << 0 << endl;
        return;
    }

    if(x == 0){
        for(int i = 1; i < n; i++) ans.push_back(i);
        ans.push_back(x);
    }
    else {
        for(int i = 0; i < x; i++) ans.push_back(i);
        for(int i = x + 1; i < n; i++) ans.push_back(i);
        if(n != x) ans.push_back(x);
    }
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