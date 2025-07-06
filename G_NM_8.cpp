#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int N = 1e8;
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
    vector<int> primes;
    for(int i = 2; i < N; i++){
        if(mark[i]) primes.push_back(i);
    }

    for(int i = 0; i < primes.size(); i += 100){
        cout << primes[i] << endl;
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}