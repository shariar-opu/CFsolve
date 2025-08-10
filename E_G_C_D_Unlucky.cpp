#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
    int n;  cin >> n;

    vector<ll> p(n), s(n);
    for(ll &i: p) cin >> i;
    for(ll &i: s) cin >> i;

    ll gp = p[0], gs = s[n - 1];
    for(int i = 1; i < n; i++) gp = __gcd(gp, p[i]);
    for(int i = n - 2; i >= 0; --i) gs = __gcd(gs, s[i]);
 
    if(gp == gs){
        cout << "NO\n";
    }

    vector<ll> a;
    map<ll, ll> mark;
    for(int i = 0; i < n; i++){
        if(mark.find(p[i]) == mark.end()){
            a.push_back(p[i]);
            mark[p[i]]++;
        }
    }
    for(int i = 0; i < n; i++){
        if(mark.find(s[i]) == mark.end()){
            a.push_back(s[i]);
            mark[s[i]]++;
        }
    }

    for(auto u: a) cout << u << " ";
    cout << endl;

    //time complexity: O(nlog(n))
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}