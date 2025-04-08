#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int tc){
    string s;   cin >> s;
    int mx = 0, z = 0;
    for(char c : s){
        if(c == '0') z++;
        else{
            int cnt = z + 1;
            if(cnt > mx){
                mx = cnt;
            }
        }
    }
    cout << s.size() - mx << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}