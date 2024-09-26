#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        vector<int>a(n+n);
        int cnt = 0, sum = 0;
        vector<int>v;
        for(int i = 0; i < n+n; i++){
            cin >> a[i];
        }
        bool ok = 0;
       for(int i = 0; i < n+n; i++){
        for(int j = 0; j < n+n; j++){
            if(a[j]!=a[i] && (a[j]+a[i]) % 2 == 0){
                ok = 1;
                break;
            }
            if(ok)break;
        }
       }
        ok?cout << "No\n":cout << "Yes\n";

    }
}