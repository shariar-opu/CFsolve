#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s, tmp = "";   cin >> s;
    vector<int> freq(26, 0);

    bool ok = 0;
    int i = 0;
    for(auto u : s){
        if(!freq[u - 'a']){
            if(!ok) tmp += u;
            else {
                cout << "NO\n";
                return;
            }
        }
        else {
            ok = 1;
            if(u == tmp[i]){
                i++;
                if(tmp.size() <= i) i = 0;
            }
            else {
                cout << "NO\n";
                return;
            }
        }
        freq[u - 'a']++;
    }
    cout << "YES\n";

    // for(int i = 0; i < 26; i++) cout << i << " " << freq[i] << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    while(t--) solve();

    return 0;
}