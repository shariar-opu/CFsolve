#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n,m,l = 0, r = 0;  cin >> n >> m;
        set<int>s;
        vector<int>arr(n);
        for(int i = 0; i < n; i++){
            cin>> arr[i];
            if(arr[i] > 0) s.insert(arr[i]);
            if(arr[i] == -1) l++;
            if(arr[i] == -2) r++;
        }
        int k = s.size();
        int taken = 1;
        int ans = max(r+k,l+k);
        for(auto i : s){
            int l_seat = i - taken;
            int r_seat = m - i - (k- taken);
            l_seat = min(l,l_seat);
            r_seat = min(r,r_seat);
            ans = max(ans, l_seat+r_seat+k);
            taken++;
        }
        ans = min(ans, m);
        cout << ans << "\n";
    }
}