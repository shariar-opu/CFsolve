#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>arr(n);
        bool ok = 0;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(i>0 && arr[i-1]<=arr[i])ok = 1;
        }
        ok?cout << "YES\n":cout << "NO\n";
    }
}
