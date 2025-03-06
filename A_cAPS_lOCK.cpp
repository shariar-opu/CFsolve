#include<bits/stdc++.h>
using namespace std;
int main(){
    string s, ans = "";   cin >> s;

    bool ok = true;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && i > 0) ok = false;
        if(s[i] >= 'a') ans += s[i] - 32;
        else ans += s[i] + 32;
    }
    ok? (cout << ans << endl) : (cout << s << endl);
} 