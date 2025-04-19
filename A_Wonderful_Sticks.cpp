#include<bits/stdc++.h>
using namespace std;

void solve(int tc){
    int n;  cin >> n;
    string s;   cin >> s;

    int small = 1, big = n;
    vector<int> ans;
    for(int i = n - 2; i >= 0; --i){
        if(s[i] == '<') {
            ans.push_back(small);
            small++;
        }
        else{
            ans.push_back(big);
            big--;
        }
    }
    ans.push_back(big);
    reverse(ans.begin(), ans.end());
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