#include<bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int32_t main(){
    fast();
    int t;  cin>>t;
    while(t--){
        int d,mp,l,tp;
        cin >> d >> mp>>l>>tp;
        int task = d/7;
        if(d%7)task++;
        // cout << task << endl;

        int rem = mp/tp;
        if(mp%tp)rem++;
        // cout << rem << endl;

        task = min(task,rem);
        // cout << task << endl;

        int day = task/2;
        if(task%2) day++;
        // cout << day << endl;

        int rp = mp - ((day*l)+(task*tp));
        // cout << rp << endl;

        if(rp > 0){
            day+=(rp/l);
            if(rp%l)day++;
        }
        int ls = 0;
        int rs = d;
        while(rs-ls > 1){
            int mid = (rs+ls)/2;
            if(day >= mp){
                rs = mid;
            }
            else ls = mid;
        }
        cout << d - rs << "\n";

        if(d-day < 0) cout << 0 << "\n";
        else cout << d-day << "\n";
    }
}