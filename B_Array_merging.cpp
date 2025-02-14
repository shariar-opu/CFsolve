#include<bits/stdc++.h>
using namespace std;
const int inf = 2e5;
void solve(){
    int n;  cin >> n;

    vector<int> a(n), b(n);
    for(int &i : a) cin >> i;
    for(int &i : b) cin >> i;

    int cnt = 1;
    map<int, int> cnt1, cnt2;
    for(int i = 1; i < n; i ++){
        if(a[i] == a[i - 1]) cnt ++;
        else{
            if(cnt1[a[i - 1]] < cnt){
                cnt1[a[i - 1]] = cnt;
            }
            cnt = 1;
        }
    }
    if(cnt){
        if(cnt > cnt1[a[n - 1]]) cnt1[a[n - 1]] = cnt;
    }
    cnt = 1;

    for(int i = 1; i < n; i ++){
        if(b[i] == b[i - 1]) cnt++;
        else{
            if(cnt > cnt2[b[i - 1]]){
                cnt2[b[i - 1]] = cnt;
            }
            cnt = 1;
        }
    }

    if(cnt){
        if(cnt > cnt2[b[n - 1]]) cnt2[b[n - 1]] = cnt;
    }

    int ans = 0;
    for(auto u : cnt1){
        ans = max(ans, u.second + cnt2[u.first]);
    }

    for(auto u : cnt2){
        ans = max(ans, u.second);
    }

    cout << ans << endl;
}
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int t;  cin >> t;
    while(t--) solve();
}