#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define ins insert
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define dn(a) cout << a << '\n'
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define watch(x) cerr << '\n' << (#x) << " is " << (x) << '\n'
#define time cerr << "time = " << clock() << " ms" << '\n'
#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

void solve(int tc){
    string s,a,b;   cin >> s >> a >> b;
    string k = a+b;
    sort(all(s));
    sort(all(k));
    // cout << k << " " << s << endl;
    // bool mark[sz(k)] = {0};
    // int cnt = 0;
    for(int i = 0; i < sz(k); i++){
        if((k.substr(i, sz(s))) == s){
            yes;
            return;
        }
    }
    no;
    // for(int i = 0, j = sz(s)-1; i < sz(s)/2, j >= sz((s))/2; i++, j--){
    //     if(s[i] == k[i] && !mark[i]){
    //         mark[i] = 1;
    //         cnt++;
    //     }
    //     if(s[j] == k[j] && !mark[j]){
    //         mark[j] = 1;
    //         cnt++;
    //     }
    // }
    // if(cnt == sz(s))
}

int32_t main(){
    optimize();
    int t = 1;  
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}