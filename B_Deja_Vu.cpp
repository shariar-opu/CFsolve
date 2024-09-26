#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int n,q;    cin >> n >> q;
        vector<int>a(n),b;
        for(int &i : a)cin >> i;
        for(int i = 0; i < q; i++){
            int val;    cin >> val;
            b.push_back(val);
        }

        set<int>cnt;
        for(int i=0;i<q;i++){
            if(cnt.count(b[i]))continue;
            cnt.insert(b[i]);
            for(int j=0;j<n;j++){
                if(a[j]%(1<<b[i])==0){
                    a[j] += 1<<(b[i]-1);
                }
            }
        }

        for(auto i : a)cout << i << " ";
        cout << "\n";
    }
}