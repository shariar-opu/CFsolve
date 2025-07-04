#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    int n;  cin >> n;
    vector<int> ans;
    if(n & 1) {
        ans.push_back(3);
        n -= 3;
    }
    if(n > 0){
        for(int i = 0; i < n / 2; i++){
            ans.push_back(2);
        }
    }
    
    sort(ans.begin(), ans.end());
    cout << ans.size() << endl;
    for(auto u: ans) cout << u << " ";
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}