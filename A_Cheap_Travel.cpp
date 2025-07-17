#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    int n, m, a, b; 
    cin >> n >> m >> a >> b;

    int ans = 0, cost_a = 0;
    for(int i = 1; i <= n; i++){
        cost_a += a;
        if(i % m == 0){
            ans += min(cost_a, b);
            cost_a = 0;
        }
    }

    ans += min(cost_a, b);

    cout << ans << endl;

    //time complexity: O(n)
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}