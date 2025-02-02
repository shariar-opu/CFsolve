#include<bits/stdc++.h>
using namespace std;

const int inf = 1e5;

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int n, totalPrice;   cin >> n >> totalPrice;

    vector<int> bookPrice(n), bookPage(n);
    for(int i = 0; i < n; i++){
        cin >> bookPrice[i];
    }
    for(int i = 0; i < n; i++){
        cin >> bookPage[i];
    }

    vector<vector<int>> dp(n + 1, vector<int>(totalPrice + 1, 0));

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= totalPrice; j++){
            dp[i][j] = dp[i - 1][totalPrice];
            if(j >= bookPrice[i])
                dp[i][j] = max(dp[i][j], dp[i - 1][totalPrice - bookPrice[i]] + bookPage[i]);
        }
    }
    cout << dp[n][totalPrice] << endl;
}