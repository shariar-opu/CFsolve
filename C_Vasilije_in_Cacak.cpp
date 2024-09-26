#include<bits/stdc++.h>
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
void solve(){
    int n, k,val;    cin >> n >> k >> val;
    int cnt = 0,x = val, trap = k;
    for(int i = n; i >= 1; --i){
        if(i <= x && trap>0 ){
            x -= i;
            trap--;
        }
        if(trap > 0 && x <= 0){
            cnt++;
            x = val;
            trap = k;
            i = (n-cnt);
        }
    }
    if(trap == 0 && x == 0) cout << "YES\n";
    else cout << "NO\n";
}
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        solve();
    }
}