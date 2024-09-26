#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        if(n == 1) cout << 1 << '\n';
        else if(n&1) cout << -1 << '\n';
        else{
            vector<int>v;
            for(int i = n; i > 0; --i) v.push_back(i);
            int l = 1, r = n-2;
            while(l < r){
                if(l&1)l++;
                else if(r&1)r--;
                else{
                    swap(v[l],v[r]);
                    l++,r--;
                }
            }

            for(auto i : v) cout << i << " ";
            cout << '\n';
        }
    }
}