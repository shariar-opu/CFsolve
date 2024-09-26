#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define pb push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define mod 10000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int32_t main(){
    optimize();
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        map<int,int>mp;
        vi arr(n);
        for(int &i : arr){
            cin >> i;
            mp[i]++;
        }
        int cnt = 0, ext = 0;
        for(auto u : mp){
            if(u.second >2){
                cnt += (u.second / 3);
            }
        }
        cout << cnt << '\n';
    }
}