#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    string s;   cin >> s;
    vector<char> ch(11, '!');
    map<char, int, greater<int> > mp;
    for(auto u : s) mp[u]++;

    for(auto u : mp) {
        ch[u.first - '0'] = u.first;
        mp[u.first]--;
    }
    for(int i = 9; i >= 0; --i){
        if(ch[i] == '!'){
            int mn = INT_MAX, need = -1;
            for(auto u : mp){
                int need = u.first - '0';
                if(i <= need && u.second > 0){
                    mn = min(mn, need);
                }
            }
            char a = mn + '0';
            ch[i] = a;
            mp[ch[i]]--;
        }
    }

    for(int i = 9; i >= 0; --i) cout << ch[i];
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}