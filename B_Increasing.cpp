#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>a(n);
        for(int &i : a)cin >> i;
        sort(a.begin(),a.end());
        bool ok = 0;
        for(int i = 1; i < n; i++){
            if(a[i] == a[i-1]){
                ok = 1;
                break;
            }
        }
        ok?cout <<"NO\n":cout << "YES\n";
    }
}