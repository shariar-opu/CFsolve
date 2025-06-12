#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(int tc){
    int n;  cin >> n;
    string a, b;    cin >> a >> b;

    int z = 0, o = 0, z1 = 0, o1 = 0;
    bool ok = 0;
    for(int i = 0; i < n; i++){
        // cout << "Z = " << z << ", O = " << o << ", OK = " << ok << endl;
        if(ok && a[i] == b[i]){
            if(o != z || o - o1 != z - z1) {
                cout << "NO\n";
                return;
            }
            ok = o1 = z1 = 0;
        }
        else if(a[i] != b[i]) {
            if(a[i] == '0') z1++;
            else o1++;
            ok = 1;
        }

        if(a[i] == '0') z++;
        else o++;
    }

    if(ok && (z != o || o - o1 != z - z1)) cout << "NO\n";
    else cout << "YES\n";
    
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}