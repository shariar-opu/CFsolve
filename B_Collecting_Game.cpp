#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<pair<int,int>>vp(n),arr(n);
        int sum=0;
        for(int i = 0; i < n; i++){
            cin >> arr[i].first;
            arr[i].second=i;
        }
        sort(arr.begin(),arr.end());
        vector<int>presum(n);
        presum[0]=arr[0].first;
        for(int i=1;i<n;i++){
            presum[i]=presum[i-1]+arr[i].first;
        }
        vp[n-1].second = n-1;
        vp[n-1].first = arr[n-1].second;
        int r = n-1,cnt=0;
        for(int i=n-2;i>=0;--i){
            cnt++;
            if(presum[i]>=arr[i+1].first){
                vp[i].second=r;
                vp[i].first=arr[i].second;
                r=vp[i].second;
            }
            else {
                vp[i].second=i;
                vp[i].first=arr[i].second;
                r = i;
            }
        }
        sort(vp.begin(),vp.end());
        for(auto u:vp) cout << u.second << " ";
        cout << "\n";

    }
}