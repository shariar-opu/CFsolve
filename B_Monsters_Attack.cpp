#include<bits/stdc++.h>
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        map<int , int> mp;
        int n,k;    cin >> n >> k;
        vector<int>a(n),b(n);
        int sum = 0;
        
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++) {
            cin >> b[i];
            mp[abs(b[i])] += a[i];
        }
        bool ok = 1;
        for(int i = 0; i <= n; i++){
            sum += mp[i];
            if(sum > k*i){
                ok = 0;
            }
        }
        ok?cout << "YES\n" : cout << "NO\n";
        
    }
}