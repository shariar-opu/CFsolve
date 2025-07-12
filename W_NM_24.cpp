#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const  int N = 5e6;
int spf[N + 7];
unsigned ll pre[N + 7];

void spf_and_phi(){
    for(int i = 2; i <= N; i++) spf[i] = i;
    for(int i = 2; i <= N; i++){
        if(spf[i] == i){
            for(int j = i; j <= N; j += i){
                spf[j] = min(spf[i], i);
            }
        }
    }

    for(int i = 2; i <= N; i++){
        int res = 1, x = i;
        while(x > 1){
            int p = spf[x], e = 1;
            while(x % p == 0){
                x /= p;
                e *= p;
            }
            res *= (e / p) * (p - 1);
        }
        pre[i] = pre[i - 1] + res * 1LL * res;
    }
}

void solve(int tc){
    int a, b;   cin >> a >> b;
    cout << "Case " << tc << ": " << pre[b] - pre[a - 1] << endl;

    //time complexity: o(T * 1);
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    spf_and_phi();

    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}