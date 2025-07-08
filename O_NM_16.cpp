#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N = 100;
vector<int> pf[N + 7];
void calpf(int n){
    int tmp = n;
    for(int i = 2; i * i <= n; i++){
        if(n % i == 0){
            while(n % i == 0){
                pf[tmp].push_back(i);
                n /= i;
            }
        }
    }
    if(n > 1) pf[tmp].push_back(n);
}

void solve(int tc){
    int n;  cin >> n;

    map<int, int> mp;
    for(int i = 2; i <= n; i++){
        for(auto u: pf[i]) mp[u]++;
    }

    int idx = 0;
    cout << "Case " << tc << ": " << n << " = ";
    for(auto u: mp){
        idx ++;
        cout << u.first << " (" << u.second;
        if(mp.size() == idx)  cout << ")\n";
        else  cout << ") * ";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    for(int i = 2; i <= N; i++) calpf(i);

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}