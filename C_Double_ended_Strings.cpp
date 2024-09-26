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
    string a,b; cin >> a >> b;
    vector<string>s1,s2;
    for(int i = 1; i <= sz(a); i++){
        for(int j = 0; j < sz(a); j++){
            s1.pb(a.substr(j,i));
        }
    }
    for(int i = 1; i <= sz(b); i++){
        for(int j = 0; j < sz(b); j++){
            s2.pb(b.substr(j,i));
        }
    }
    int ans = INT_MIN;
    for(int i = 0; i < sz(s1); i++){
        for(int j = 0; j < sz(s2); j++){
            if(s1[i] == s2[j]){
                ans = max(ans,sz(s1[i]));
            }
        }
    }
    cout << (sz(a)-ans)+(sz(b)-ans) << endl;
}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}