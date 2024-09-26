#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        for(int &i : arr)cin >> i;
        if(n==1)cout<<0<<"\n";
        else {
            int ans = 0;
            for(int i = 1;i < n; i++){
                ans = max(ans,arr[i]-arr[0]);
            }
            for(int i = 0; i < n-1; i++){
                ans = max(ans,arr[n-1]-arr[i]);
            }
            for(int i = 1; i < n; i++){
                ans = max(ans, arr[i-1]-arr[i]);
            }

            cout << ans << '\n';
        }
    }
}