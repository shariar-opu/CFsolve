#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 1e4 + 7;
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
    //time complexity: O(sqrt(N) * log(N));
}

void solve(int tc){
    int m, n;   cin >> m >> n;

    int ans = INT_MAX;
    for(auto p: primes){
        if(p > m) break;
        if(m % p == 0){
            int e = 0;
            while(m % p == 0){
                ++ e;
                m /= p;
            }
            int x = 0;
            for(int i = 1; i <= n; i++){
                int tmp = i;
                while(tmp % p == 0) {
                    ++ x; 
                    tmp /= p;
                }
            }
            ans = min(ans, x / e);
        }
    }
    cout << "Case " << tc << ":\n";
    if(ans) cout << ans << endl;
    else cout << "Impossible to divide\n";

    //time complexity: O(T * n * log(n) * log(m)) ;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}