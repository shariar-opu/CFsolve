#include<bits/stdc++.h>
using namespace std;
const int inf = 1e5;

int n, bookPrice[1007], bookPage[1007], dp[1007][inf + 7];

int solve(int book, int price){
    if(price == 0) return 0;
    if(book < 0) return 0;
    if(dp[book][price]) return dp[book][price];
    int res = solve(book - 1, price);
    if(price >= bookPrice[book]) res = max(res, solve(book - 1, price - bookPrice[book]) + bookPage[book]);

    return dp[book][price] = res;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int totalPrice;   cin >> n >> totalPrice;

    for(int i = 0; i < n; i++){
        cin >> bookPrice[i];
    }
    for(int i = 0; i < n; i++){
        cin >> bookPage[i];
    }

    cout << solve(n - 1, totalPrice) << endl;
}