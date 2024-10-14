#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define e '\n'
#define int ll
#define pb push_back
#define in insert
#define all(u) u.begin(), u.end()
#define rall(u) u.rbegin(), u.rend()
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf = 1e7;
const int mod = 1000000000;
bool  vis[inf+5];
vector<int>primes, pre(inf);
void sieve()
{
    for(int i = 4; i <= inf; i += 2) vis[i] = 1;
    for(int i = 3; i*i <= inf; i += 2){
        if(!vis[i]){
            for(int j = i*i; j <= inf; j += 2 * i){
                if(!vis[j]) vis[j] = 1;
            }
        }
    }

    primes.pb(2);
    for(int i = 3; i <= inf; i += 2){
        if(!vis[i]) primes.pb(i);
    }
    for(int i = 0; i < primes.size(); i++){
        pre[primes[i]]++;
    }
    int sum = 0;
    for(int i = 0; i < pre.size(); i++){
        sum += pre[i];
        pre[i] = sum;
    }
}
void solve(int tc){
    int m, n;   cin >> m >> n;

    cout << pre[n] - pre[m-1] << endl;

}
int32_t main(){
    fast();
    sieve();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve(i);
    }

}
