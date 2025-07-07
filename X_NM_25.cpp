#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 1e6 + 7;
bitset<N> mark;
vector<int> primes;
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

    for(int i = 2; i <= N; i++){
        if(mark[i]) primes.push_back(i);
    }
}

void solve(int tc){
    ll n;   cin >> n;
    ll divs = 1;
    for(auto u: primes){
        if(1ll * u * u > n) break; 
        int res = 0;
        if(n % u == 0){
            while(n % u == 0){
                res ++;
                n /= u;
            }
            divs *= (res + 1);
        }
    }
    if(n > 1) divs <<= 1;

    cout << "Case " << tc << ": " << divs - 1 << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}