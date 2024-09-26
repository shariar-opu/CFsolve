#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;  cin>> t;
    while(t--){
        int n;  cin >> n;
        map<int,int>mp;
        int mxfr = INT_MIN;
        vector<int>arr(n);
        for(int i = 0; i< n; i++){
            cin >>arr[i];
            mp[arr[i]]++;
            mxfr = max(mxfr,mp[arr[i]]);
        }
        int ans = 0;
        int r = n - mxfr;
        while(r > 0){
            ans += min(mxfr,r);
            r -= mxfr;
            mxfr *= 2;
            ans++;
        }
        cout << ans << "\n";
    }
}