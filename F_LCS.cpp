#include<bits/stdc++.h>
using namespace std;
const int inf = 3000;

string s, t;
int dp[inf + 7][inf + 7], n, m;

int solve(int i, int j){
    if(i == n || j == m) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int &res = dp[i][j] = 0;

    if(s[i] == t[j]) res = 1 + solve(i + 1, j + 1);
    else{
        res = max(solve(i + 1, j), solve(i, j + 1));
    }

    return res;
}

void print(int i, int j){
    if(i == n || j == m) return;

    if(s[i] == t[j]){
        cout << s[i];
        print(i + 1, j + 1);
        return;
    }

    int tmp = solve(i + 1, j);
    if(tmp > solve(i, j + 1)){
        print(i + 1, j); 
    }
    else print(i, j + 1);
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    memset(dp, -1, sizeof(dp));
    
    cin >> s >> t;

    n = s.size(), m = t.size();

    solve(0, 0);
    print(0, 0);
    
    return 0;
}