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
            for(ll j = i * i; j < N; j += i){
                mark[j] = false;
            }
        }
    }

    for(int i = 2; i < N; i++){
        if(mark[i]) primes.push_back(i);
    }
}

void solve(int tc){
    ll n;   cin >> n;
    int ans = 0, tmp = n;
    for(auto p: primes){
        if(p > n || tmp == 1) break;
        if(tmp % p == 0){
            ans = max(ans, p);
            while(tmp % p == 0){
                tmp /= p;
            }
        }
    }
    cout << ans << endl;

    //time complexity: 78498 * log(n)
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();

    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}