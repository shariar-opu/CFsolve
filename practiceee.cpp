#include<bits/stdc++.h>
using namespace std;
#define ll long long

int cnt[2000007];

void solve(int tc){
    int n;  cin >> n;
    vector<int> arr(n);
    for(int &i: arr) cin >> i;

    int ans = 0;
    for(int i = 0; i < n; i++){
        for(int j = 1; j * j <= arr[i]; j++){
            if(arr[i] % j == 0){
                if(cnt[arr[i] / j]) ans = max(ans, arr[i] / j);
                else cnt[arr[i] / j] ++;
                if(arr[i] / j != j && cnt[j]) ans = max(ans, j);
                else cnt[j] ++;
            }
        }
    }

    cout << ans << '\n';

    //time complexity: 2 * 10 ^ 8
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}