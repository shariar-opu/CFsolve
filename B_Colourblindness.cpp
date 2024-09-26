#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        string a,b;   cin >> a >> b;
        for(int i = 0; i < n; i++){
            if(a[i] == 'B'){
                a[i]  = 'G';
            }
            if(b[i] == 'B'){    
                b[i]  = 'G';
            }
        }
        bool ok = 1;
        for(int i = 0; i < n; i++){
            if(a[i] != b[i]){
                ok = 0;
                break;
            }
        }
        ok? cout << "YES\n" : cout << "NO\n";
    }
}