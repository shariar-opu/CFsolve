#include<bits/stdc++.h>
using namespace std;
#define int long long

void solve(int tc){
    string s;   cin >> s;
    int mx = 0, z = 0;
    for(auto c : s){
        if(c == '0') z++;
        else mx = max(mx, z + 1);
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