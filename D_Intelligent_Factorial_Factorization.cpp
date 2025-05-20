#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int inf = 100;
bool mark[inf+5];
vector<ll>primes;
void siv(){
    mark[0] = mark[1] = 1;
    for(int i = 4; i <= inf; i += 2) mark[i] = 1;
    for(int i = 3; i*i <= inf; i += 2){
        if(!mark[i]){
            for(int j = i*i; j <= inf; j += i+i){
                mark[j] = 1;
            }
        }
    }

    primes.push_back(2);
    for(int i = 3; i <= inf; i++){
        if(!mark[i]) primes.push_back(i);
    }
}

int pw(int a, int b){
    int r = 1;
    while(b > 0){
        if(b & 1) r *= a;
        a *= a;
        b >>= 1;
    }
    return r;
}

int lgn(int a, int b)
{
    int res = 0;
    while (a > 1) {
        a /= b;
        res++;
    }
    return res;
}

void solve(int tc){
    int n;  cin >> n;
    vector<int> p;
    for(auto u : primes){
        if(u > n) break;
        p.push_back(u);
    }

    int ans[n + 7] = {0};
    for(auto u : p){
        int lg = lgn(n, u), sum = 0;
        for(int i = 1; i <= lg; i++){
            sum += (n / pw(u, i));
        }
        ans[u] = sum;
    }

    int cnt = 0;
    cout << "Case " << tc << ": " << n << " = ";
    for(auto u : p) {
        cnt++;
        if(cnt == p.size()) {
            cout << u << " (" << ans[u] << ")" << '\n';
        }
        else cout << u << " (" << ans[u] << ") * ";
    }
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    siv();
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}