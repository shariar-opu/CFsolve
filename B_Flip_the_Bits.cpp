#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    string a, b;    cin >> a >> b;

    int z = 0, o = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != b[i]){
            if(a[i] == '0') z++;
            else o++;
        }
        else{
            if(o != z) {
                cout << "NO\n";
                return;
            }
            z = o = 0;
        }
    }
    if((z || o) && z != o) cout << "NO\n";
    else cout << "YES\n";
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}