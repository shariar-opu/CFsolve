#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int n,m;    cin >> n >> m;
    map<int, int>mp;
    vector<int>a(n),b(m);
    for(int i = 0; i< n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i< m; i++){
        cin >> b[i];
        mp[b[i]]++;
    }
    bool ok =0;
    for(auto i : mp){
        if(i.second > 1){
            ok = 1;
            break;
        }
    }
    cout <<( ok? "You Lose" : "You Win") << "\n";
}