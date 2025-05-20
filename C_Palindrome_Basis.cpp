#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int inf = 4e4, mod = 1e9 + 7;
vector<int> p;
int dp[507][inf + 7];

void Gen(){
    for(int i = 0; i < 10; i++) p.push_back(i);
    for(int i = 10; i <= inf; i++){
        string a = to_string(i);
        string b = a;
        reverse(b.begin(), b.end());
        if(a == b) p.push_back(i);
    }
}

int recur(int j, int n){
    if(n == 0) return 1;
    if(j == p.size() || p[j] > n) return 0;
    if(dp[j][n] != -1) return dp[j][n];

    int &res = dp[j][n] = 0;
    res = recur(j + 1, n) % mod;
    res = (res + recur(j, n - p[j]) % mod) % mod;
    return res;
}

void solve(int tc){
    int n;  cin >> n;

    cout << recur(1, n) << '\n';
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(dp, -1, sizeof(dp));
    Gen();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}