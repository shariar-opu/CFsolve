#include<bits/stdc++.h>
using namespace std;
string s, t, nnn;
string solve(char a, int j){
    if(j >= s.size()) return nnn;
    if(j >= t.size()) return nnn;

    string res = "";
    bool ok = 0;
    for(int q = j; q < t.size(); q++){
        if(a == t[q]){
            res = solve(s[j+1], q+1) + t[q];
            // string tmp = solve(s[i+1], q+1);
            // if(res.size() < tmp.size() + 1) res = tmp + t[q];
            // ok = 1;
            break;
        }
    }

    // if(!ok && i < s.size() - 1) res = solve(s[i+1], j);
    return res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    cin >> s >> t;

    string ans = "";
    for(int i = 0; i < s.size(); i++){
        string tmp = solve(s[i], i);
        if(ans.size() < tmp.size()) ans = tmp.size();
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;

    return 0;
}