#include<bits/stdc++.h>
using namespace std;

const int inf = 1e3;
int arr[inf + 7], dp[inf + 7][inf + 7][2], n , m;

int f(int i, int sum, int ok){
    if(i == n) return sum == 0 && ok;
    if(dp[i][sum][ok] != -1) return dp[i][sum][ok];

    dp[i][sum][ok] = f(i + 1, sum, ok);
    dp[i][sum][ok] |= f(i + 1, (sum + arr[i]) % m, 1);
    return dp[i][sum][ok];
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    cin >> n >> m;

    if(n >= m) { //pigeonhole principle
        cout << "YES\n";
        return 0;
    }

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        arr[i] %= m;
    }

    memset(dp, -1, sizeof(dp));
    if(f(0, 0, 0)){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }

    return 0;
}