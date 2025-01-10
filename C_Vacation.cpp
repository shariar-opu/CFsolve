#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 1e5 + 7;
int n, arr[inf][3], dp[inf][3], mark[inf][3];
int check(int i, int j){
    if(i == n - 1) return arr[i][j];
    if(mark[i][j]) return dp[i][j];

    int res = 0;
    for(int k = 0; k < 3; k++){
        if(j != k) res = max(res, arr[i][j] + check(i+1, k));
    }

    mark[i][j] = 1;
    dp[i][j] = res;
    return res;
}

void solve(){
    int tmp = 0;    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
            tmp = max(tmp, arr[i][j]);
        }
    }

    if(n == 1){
        cout << tmp << endl;
        return;
    }

    int ans = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i != j){
                ans = max(ans, arr[0][i] + check(1, j));
            }
        }
    }

    cout << ans << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    while(t--){
        solve();
    }
    return 0;
} 