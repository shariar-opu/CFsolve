#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;   cin >> s;
    int l = 0, r = 0;
    map<char, int> mp;
    int cnt = 0, ans = 1;
    while(l < s.size() && r < s.size()){
        mp[s[r]]++;
        if(mp[s[r]] > 1){
            r = l+1;
            l = r;
            cnt = 0;
            mp.clear();
        }
        else {
            r++;
            cnt++;
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
}
