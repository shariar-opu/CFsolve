#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 1e7 + 7;
bitset<N> is_prime;
vector<int> primes;
void sieve(){
    is_prime[1] = false;
    for(int i = 2; i <= N; i++) is_prime[i] = true;
    for(int i = 2; i * i < N; i++){
        if(is_prime[i]){
            for(int j = i * i; j < N; j += i) {
                is_prime[j] = false;
            }
        }
    }

    for(int i = 2; i < N; i++){
        if(is_prime[i]) primes.push_back(i);
    }
}

void solve(int tc){
    int n;  cin >> n;

    int ans = 0;
    for(auto a: primes){
        if(a > n) break;
        int b = n - a;
        if(is_prime[b] && a <= b) ++ans;
    }
    cout << "Case " << tc << ": " << ans << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}