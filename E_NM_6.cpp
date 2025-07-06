#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

const int inf = 1e6;
int cnt[inf + 7], mul[inf + 7];

void solve(int tc){
    int n;  cin >> n;
    for(int i = 1; i <= n; i++){
        int a;  cin >> a;
        cnt[a]++;
    }

    for(int i = 1; i <= inf; i++){
        for(int j = i; j <= inf; j += i){
            mul[i] += cnt[j];
        }
    }

    for(int i = 1; i <= inf; i++) cout << mul[i] << " ";
    cout << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}