#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int32_t main(){
    fast();
    int t;  cin >> t;
    while(t--){
        int d,mp,l,tp;
        cin >>d>>mp>>l>>tp;

        int task = d/7;
        if(d%7)task++;

        int ls = 0;
        int rs = d;
        while(rs-ls > 1){
            int mid = (rs+ls)/2;
            int k = mid * l + min(2 * mid, task) * tp;
            if(k >= mp){
                rs = mid;
            }
            else ls = mid;
        }
        cout << d - rs << "\n";
    }
}