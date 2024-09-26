#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n,w;  cin >> n >> w;
        int weight = w;
        int c = 0;
        vector<pair<int,int>>vp(n);
        for(int i = 0; i < n; i++){
            cin >> vp[i].first;
            vp[i].second = i+1;
        }
        sort(vp.rbegin(),vp.rend());
        vector<int>ans;
        for(auto u : vp){
            if(u.first <= w){
                ans.push_back(u.second);
                w -= u.first;
                c += u.first;
            }
        }

        int half = 0;
        if(weight & 1) half = (weight/2)+1;
        else half = weight/2;
        if(ans.empty() || c < half) cout << -1 << '\n';
        else{
            cout << ans.size() << '\n';
            for(int &i : ans) cout << i << ' ';
            cout << '\n';
        }
    }
}