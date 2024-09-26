#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define pp pop_back
#define in insert
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
const int inf = 2e5;
const ll infLL = 9000000000000000000;
const int mod = 100000007;

int gcd(int a, int b){
    return __gcd(a,b);
}
int lcm(int a,int b){
    return ((a*b)/gcd(a,b));
}
bool vis[inf+123];

void solve(int tc){
    int n,sum = 0;  cin >> n;
    vector<int>a(n), b(n), c(n);
    for(int &i : a){
        cin >> i;
        sum += i;
    }
    for(int &i : b) cin >> i;
    for(int &i : c) cin >> i;

    int req = ceil(sum/3);
    int cv = ceil(n/3);

    vector<int>ans;

    bool ok = 0;
    for(int i = 0; i < n; i++){
        int sum1 = a[i];
        if(sum1 >= req){
            ans.pb(i+1);
            ans.pb(i+1);
            vis[i] = 1;
            break;
        }
        for(int j = i+1; j < cv+i; j++){
            sum1 += a[j];
            if(sum1 >= req){
                ans.pb(i+1);
                ans.pb(j+1);
                vis[i] = vis[j] = 1;
                ok = 1;
                break;
            }
        }
        if(ok)break;
    }

    ok = 0;
    for(int i = 0; i < n; i++){
        int sum1 = 0;
        if(vis[i] == 0){
            sum1 = b[i];
            if(sum1 >= req){
                ans.pb(i+1);
                ans.pb(i+1);
                vis[i] = 1;
                break;
            }
        }
        for(int j = i+1; j < cv+i; j++){
            if(vis[j] == 0){
                sum1+=b[j];
                if(sum1 >= req){
                    ans.pb(i+1);
                    ans.pb(j+1);
                    vis[i] = vis[j] = 1;
                    ok = 1;
                    break;
                }
            }
        }
        if(ok)break;
    }

    ok = 0;
    for(int i = 0; i < n; i++){
        int sum1 = 0;
        if(vis[i] == 0){
            sum1 = c[i];
            if(sum1 >= req){
                ans.pb(i+1);
                ans.pb(i+1);
                vis[i] = 1;
                break;
            }
        }
        for(int j = i+1; j < cv+i; j++){
            if(vis[j] == 0){
                sum1+=c[j];
                if(sum1 >= req){
                    ans.pb(i+1);
                    ans.pb(j+1);
                    vis[i] = vis[j] = 1;
                    ok = 1;
                    break;
                }
            }
        }
        if(ok)break;
    }

    if(sz(ans) < 6) cout << -1 << endl;
    else {
        for(auto u : ans) cout << u << " ";
        cout << endl;
    }

}

int32_t main(){
    optimize();
    int t = 1;  
    cin >> t;
    for(int tc = 1; tc <= t; tc++){
        solve(tc);
    }
}