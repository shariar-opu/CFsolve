#include <bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        string s;   cin >> s;
        map<char, int> cnt;
        int k = 0, ans = 0, disturb = 0;
        for(int i = 0; i < n; i++){
            cnt[s[i]]++;
            if(cnt[s[i]] > 1){
                ans += k;
                disturb++;
            }
            else{
                k = i+1 - disturb;
                ans += k;
            }
        }
        cout << ans << "\n";
    }
}