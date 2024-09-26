#include<bits/stdc++.h>
using namespace std;
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        string s;   cin >> s;
        int cnt = 0, mx = 0,star = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '*' && s[i+1] == '*'){
                mx = max(mx,star);
                break;
            }
            else {
                if(s[i] == '@') star++;
            }
            mx = max (mx, star);
        }
        cout << mx << "\n";
    }
}