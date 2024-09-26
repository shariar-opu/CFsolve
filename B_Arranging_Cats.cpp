#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int cnt = 0, cnt2 = 0;
        int n;  cin >> n;
        string s,f;
        cin >> s >> f;

        for(int i = 0; i < n; i++){
            if(s[i] == '0' && f[i] == '1') cnt++;
            if(s[i] == '1' && f[i] == '0') cnt2++;
        }

        int ans = max(cnt,cnt2);
        cout << ans << endl;
    }
}