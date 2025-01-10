#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int> arr(n);
        map<int, int> mp;
        for(int &i : arr){
            cin >> i;
            mp[i]++;
        }
        int cnt = 0;
        for(auto u : mp){
            if(u.second == 1) cnt++;
        }
        if(cnt > 2) cout << "NO\n";
        else cout << "YES\n";
    }
}