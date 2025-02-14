#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    char c; cin >> c;
    string s;   cin >> s;

    if(n == 1) {
        cout << 0 << endl;
        return;
    }

    vector<int> starting, green;

    for(int i = 0; i < n; i++){
        if(s[i] == 'g') green.push_back(i);
        if(s[i] == c) starting.push_back(i + 1);
    }

    sort(green.begin(), green.end());
    sort(starting.begin(), starting.end());

    int ans = INT_MAX;
    if(s[n - 1] == 'g'){
        ans = n - starting.back();
    }
    else if(s[n - 1] == c){
        ans = green[0] + 1;
    }
    else{
        for(auto i : starting){
            for(auto g : green){
                ans = min(ans, n - i + 1 + g);
            }
        }
    }
    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        solve();
    }
}