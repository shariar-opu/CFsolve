#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;  cin >> n;
    char c; cin >> c;
    string s;   cin >> s;

    if(n == 1){
        cout << 0 << endl;
        return;
    }

    s += s;
    int ans = 0, g = -1;
    for(int i = s.size() - 1; i >= 0; --i){
        if(s[i] == 'g') g = i;
        if(s[i] == c) ans = max(ans, g - i);
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