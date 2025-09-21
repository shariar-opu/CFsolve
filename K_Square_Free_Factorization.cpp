#include<bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e6 + 7;
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

    for(int i = 2; i <= N; i++){
        if(mark[i]) primes.push_back(i);
    }
}

void solve(int tc){
    int n;  cin >> n;
    
    int ans = 1e9;
    for(int i = 0; i < primes.size(); i++){
        if(n <= 1) break;
        if(n % primes[i] == 0){
            int cnt = 0;
            while(n % primes[i] == 0){
                cnt ++;
                n /= primes[i];
            }
            ans = min(ans, cnt);
        }
    }
    
    cout << ans << '\n';

    //time complexity: 
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    sieve();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}