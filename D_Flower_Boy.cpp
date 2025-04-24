#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n, m;   cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    int ans = -1, j = 0;
    for(int i = 0; i < n && j < m; i++){
        if(a[i] >= b[j]) j++;
        else{
            if(a[i + 1] >= b[j]) j++, i++;
            else{
                if(ans == -1){
                    ans = b[j];
                    j++;
                    i--;
                }
                else {
                    cout << -1 << endl;
                    return;
                }
            }
        }
    }
    if(ans == -1) cout << 0 << endl;
    else cout << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}