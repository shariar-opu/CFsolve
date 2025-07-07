#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 1e7 + 7;
bitset<N> mark;
void sieve(){
    mark[1] = false;
    for(ll i = 2; i < N; i++) mark[i] = true;
    for(ll i = 2; i * i < N; i++){
        if(mark[i]){
            for(ll j = i + i; j < N; j += i){
                mark[j] = false;
            }
        }
    }
}

void solve(int tc){
    sieve();
    vector<pair<int, int>> vp;
    for(int i = 1; i < N - 2; i++){
        if(mark[i] && mark[i + 2]) vp.push_back(make_pair(i, i + 2));
    }

    int n;
    while(cin >> n){
        cout << "(" << vp[n - 1].first << ", " << vp[n - 1].second << ")\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}