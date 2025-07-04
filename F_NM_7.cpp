#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int inf = 1e6;
bool mark[inf+5];
set<ll>primes;
void sieve(){
    mark[0] = mark[1] = 1;
    for(ll i = 4; i <= inf; i += 2) mark[i] = 1;
    for(ll i = 3; i*i <= inf; i += 2){
        if(!mark[i]){
            for(ll j = i*i; j <= inf; j += i){
                mark[j] = 1;
            }
        }
    }

    for(ll i = 2; i <= inf; i++){
        if(!mark[i]) primes.insert(i * i);
    }
}

void solve(int tc){
    ll n;   cin >> n;

    for(int i = 0; i < n; i++){
        ll a;  cin >> a;
        if(primes.find(a) != primes.end()) cout << "YES\n";
        else cout << "NO\n";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}