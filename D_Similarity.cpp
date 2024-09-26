#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main (){
    int t;  cin >> t;
    while(t--){
        int n , m;  cin >> n >> m;
        vector<string>v;
        for(int i = 0; i< n; i++){
            string s;   cin >> s;
            v.push_back(s);
        }
        int mx = 1;
        int cnt = 0;
        for(int i = 0; i < m; i++){
           map<int,int>freq;
            for(int j = 0; j < n; j++){
                freq[v[j][i] - 'a']++;
                mx = max(freq[v[j][i] - 'a'], mx);
            }
            cnt += mx;
            mx = 1;
        }
        cout << cnt << "\n";
    }
}