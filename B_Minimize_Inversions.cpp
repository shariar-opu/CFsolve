#include<bits/stdc++.h>
using namespace std;
#define int long long
#define all(u) u.begin(), u.end()
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>a(n),b(n), c(n+1);
        for(int i = 0; i<n;i++) cin >>a[i];
        for(int i = 0; i<n;i++){
            cin >>b[i];
            c[a[i]] = b[i];
        }
        sort(all(a));
        for(auto i : a) cout<<i<<" ";
        cout <<"\n";
        for(auto i : c) {
           if(i != 0) cout<<i<<" ";
        }
        cout <<"\n";
    }
}