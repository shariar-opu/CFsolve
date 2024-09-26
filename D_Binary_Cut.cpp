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
    string s,r = "";   cin >> s;
    r = s;
    map<char,int> mp;
    for(int i = 0; i < sz(s); i++){
        mp[s[i]]++;
    }
    sort(all(r));
    if(r==s){
        dn(1);
        return;
    }
    int cnt = 0, ans = 0,zero = 0, one = 0;
    bool ok = 0;
    for(int i = 0; i < sz(s); i++){
        if(s[i] == s[i-1])cnt++;
        else {
            cnt = 0;
            ans++;
        }
    }
    for(int i = 0; i < sz(s); i++){
        if(s[i] == '0' && s[i] != s[i+1] && i+1 < sz(s)) ok = 1;
    }
    if(ok) ans--;
    dn(ans);
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}