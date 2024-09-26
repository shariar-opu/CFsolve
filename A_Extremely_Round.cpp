#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;  cin>>t;
    while(t--){
        int n;  cin>>n;
        int cnt = 0,k = n, r = 0;
        while(k != 0){
            r = k % 10;
            cnt++;
            k/=10;
        }
        int ans = 0;
        for(int i = 1; i < cnt; i++){
            ans += 9;
        }
        cout << ans+r << "\n";
    }
}