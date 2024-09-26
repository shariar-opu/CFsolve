#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int t;  cin>>t;
    while(t--){
        int n,k;  cin>>n>>k;
        vector<int> a(n+1),b(n+1);
        for(int i = 0; i < n; i++) cin >>a[i];
        for(int i = 0; i < n; i++) cin >> b[i];

        long long ans = 0, mx = 0,sum = 0;
        for(int i = 0; i < min(n,k);i++){
            sum += a[i];
            mx = max(mx,b[i]);
            ans = max(ans, sum+mx*(k-i-1));
        }
        cout << ans << "\n";
    }
}