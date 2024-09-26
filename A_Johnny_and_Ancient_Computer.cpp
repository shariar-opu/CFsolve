#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin >> t;
    while(t--){
        int a,b;    cin >> a >> b;
        if(a<b)swap(a,b);
        bool ok = 0;
        if(a%b)ok = 1;
        a/=b;
        int cnt = 0;
        while(a!=1){
            if(a>=8 && a%8==0) a/=8,cnt++;
            else if(a>=4 && a%4==0) a/=4,cnt++;
            else if(a>=2 && a%2==0) a/=2,cnt++;
            else break;
        }
        if(a > 1 || ok)cout << -1 << "\n";
        else cout << cnt << "\n";
    }
}