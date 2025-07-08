#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 50007, mod = 1e9 + 7;
bitset<N> is_prime;
vector<int> primes;
int spf[N];
void sieve(){
    is_prime[1] = false;
    for(int i = 2; i < N; i++) is_prime[i] = true;
    for(int i = 2; i * i < N; i++){
        if(is_prime[i]){
            for(int j = i * i; j < N; j += i) is_prime[j] = false;
        }
    }

    for(int i = 2; i < N; i++) {
        if(is_prime[i]) primes.push_back(i);
    }

    for(int i = 2; i < N; i++){
        spf[i] = i;
    }
    for(int i = 2; i < N; i++){
        if(spf[i] == i){
            for(int j = i; j < N; j += i){
                spf[j] = min(spf[j], i);
            }
        }
    }
}

void solve(int tc){
    int n;  cin >> n;

   //PRIME FACTORIZATION WITH SIEVE
   /* ll ans = 1;
    for(auto p: primes){
        if(p > n) break;
        int e = 0;
        for(int i = p; i <= n; i += p){
            int tmp = i;
            while(tmp % p == 0){
                e++;
                tmp /= p;
            }
        }
        ans = (1ll * ans * (e + 1)) % mod;
    }

    cout << ans << endl;

    //time complexity: O(T * n log log(n)) */

    //PRIME FACTORIZATION WITH SPF
    vector<int> cnt(n + 1, 0);
    for(int i = 1; i <= n; i++){
        int tmp = i;
        while(tmp > 1){
            int need = spf[tmp];
            cnt[need]++;
            tmp /= need;
        }
    }

    int ans = 1;
    for(auto e: cnt){
        ans = 1LL * ans * (e + 1) % mod;
    }

    cout << ans << endl;

}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}