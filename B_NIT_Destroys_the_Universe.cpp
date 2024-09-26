#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin>>t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        for(int &i : arr)cin>>i;
        
        int cnt = 0,ans = 0;
        for(int i = 0; i < n; i++){
            if(arr[i]!=0) cnt++;
            else{
                if(cnt>0)ans++;
                cnt = 0;
            }
        }
        if(cnt>0) ans++;
        if(ans>2) cout << 2 << "\n";
        else cout <<ans << "\n";
    }
}