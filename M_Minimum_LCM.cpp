#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;  cin >> n;
    if(n & 1){
        for(int i = 3; i * i <= n; i++){
            if(n % i == 0){
                cout << n / i << " " << n - (n / i) << endl;
                return;
            }
        }
        cout << 1 << " " << n - 1 << endl;
    }
    else cout << n / 2 << " " << n / 2 << endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    while(t--) solve();
}