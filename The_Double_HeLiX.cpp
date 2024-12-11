#include<bits/stdc++.h>
using namespace std;
void solve(int tc){
    while(1){
        int n;  cin >> n;
        if(n == 0) return;
        
        map<int, int> mp;
        vector<int> a(n);
        for( int i = 0; i < n; i++ ){
            cin >> a[i];
            mp[a[i]]++;
        }
        int m;  cin >> m;
        vector<int> b(m);
        for(int i = 0; i < m; i++){
            cin >> b[i];
            mp[b[i]]++;
        }

        set<int> similer;
        for(auto u : mp){
            if(u.second == 2) similer.insert(u.first);
        }

        vector<int> p, q;
        int sum = 0;
        for( int i = 0; i < n; i++ ){
            if(similer.find(a[i]) != similer.end()){
                p.push_back(sum);
                sum = 0;
                p.push_back(a[i]);
            }
            else sum += a[i];
        }
        p.push_back(sum);
        sum = 0;
        for(int i = 0; i < m; i++){
            if(similer.find(b[i]) != similer.end()){
                q.push_back(sum);
                sum = 0;
                q.push_back(b[i]);
            }
            else sum += b[i];
        }
        q.push_back(sum);

        int ans = 0;
        for(int i = 0; i < q.size(); i++){
            ans += max(p[i], q[i]);
        }
        cout << ans << endl;
    }
}
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1; 
// cin >> t;
    while(t--) solve(t);
}