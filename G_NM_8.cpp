#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int inf = 1e7;
bool mark[inf+5];
vector<ll>primes;
void sieve(){
    mark[0] = mark[1] = 1;
    for(int i = 4; i <= inf; i += 2) mark[i] = 1;
    for(int i = 3; i*i <= inf; i += 2){
        if(!mark[i]){
            for(int j = i*i; j <= inf; j += i){
                mark[j] = 1;
            }
        }
    }

    for(int i = 2; i <= inf; i++){
        if(!mark[i]) primes.push_back(i);
    }
}

void solve(int tc){
    sieve();
    for(int i = 0; i <= inf; i += 100){
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