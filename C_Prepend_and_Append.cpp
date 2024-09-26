#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        string s;   cin >> s;
        int l = 0,r = n-1;
        int ans = 0,cnt = 0;
        while(l < r){
            if(s[l] != s[r]){
                r--, l++;
                cnt++;
            }
            else break;
        }
        ans = cnt*2;
        cout << n - ans << "\n";
    }
}