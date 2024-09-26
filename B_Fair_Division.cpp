#include<bits/stdc++.h>
using namespace std;
int32_t main (){
    int t;  cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int>arr(n);
        map<int,int>cnt;
        int sum = 0;
        for(int i = 0; i< n; i++){
            cin >> arr[i];
           cnt[arr[i]]++;
        }
        int r = cnt[2]%2;
        cnt[1] -= r*2;

        if(cnt[1] % 2 == 0 && cnt[1]>=0) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
}