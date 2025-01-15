#include<bits/stdc++.h>
using namespace std;
#define ll long 

ll n;
const int inf = 1007;
vector<ll> points(inf);

bool calc(ll m){
    ll res = m;
    for(int i = 0; i < n; i++){
        res += points[i];
        if(res <= 0) return 0;
    }
    return 1;
}

ll bs(){
    ll l = 0, r = 1e10+123;
    while(r - l > 0){
        ll mid = (r + l) / 2;
        if(calc(mid)) r = mid;
        else l = mid + 1;
    }
    if(calc(l)) return l;
    return r;
}

void solve(int tc){
    cin >> n;
    points.resize(n);
    for(ll &i : points) cin >> i;

    cout << bs() << endl;
}

int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    for(int i = 1; i <= t; i++) solve(i);
    return 0;
}