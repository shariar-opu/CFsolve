#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;   cin >> s;
    vector<int> freq(26);

    //frequency count
    for(auto u : s) freq[u - 'a']++;

    //total charecter count
    int tot_ch = 0;
    for(int i = 0; i < 26; i++){
        if(freq[i]) tot_ch++;
    }

    //base case
    if(tot_ch == 1){
        cout << "YES\n";
        return;
    }

    //brute force solution
    /*
    map<string, vector<int>> mp;

    for(int i = 0; i < s.size(); i++){
        for(int j = i; j < s.size(); j++){
            string tmp = s.substr(i, j + 1);
            map<char, int> fre;
            
            for(auto u : tmp) fre[u]++;
            vector<int> ch_fre(tot_ch, 0);

            int serial = 0;
            for(auto u : fre) {
                ch_fre[serial] = u.second; 
                serial++;
            }

            mp[tmp] = ch_fre;
        }
    }

    for (auto &p : mp) {
        cout << "\"" << p.first << "\" -> {";
        for (int i = 0; i < tot_ch; i++) {
            cout << p.second[i] << (i < tot_ch - 1 ? ", " : "");
        }
        cout << "}\n";
    }
    */

    //optimezed solution

    ;

}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    while(t--) solve();

    return 0;
}