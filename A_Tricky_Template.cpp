#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        string a,b,c;   cin >> a>>b>>c;
        string s; 
        s = a+b;
        int cnt = 0;
            for(int i = 0; i < n; i++){
                if(a[i] != c[i] && b[i] != c[i]) {
                    cnt = 1;
                    break;
                }
            }
            if(cnt == 1) cout << "YES" << endl;
            else cout << "NO" << endl;
    }
}
