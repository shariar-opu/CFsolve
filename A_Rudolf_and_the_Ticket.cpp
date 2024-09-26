#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin>>t;
    while(t--){
        int n,m,k;  cin >> n >> m >>k;
        vector<int>a(n),b(m);
        for(int &i : a) cin >> i;
        for(int &i : b) cin >> i;

        int cnt = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0;j < m; j++){
                if(a[i]+b[j] <= k)cnt++;
            }
        }
        cout << cnt << endl;
    }
}