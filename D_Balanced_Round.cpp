#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define vi vector<int>
#define vll vector<ll>
#define msi multiset<int>
#define usi unordered_set<int>
#define si set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define vpii vector<pii>
#define spii set<pii>
#define fi(s, e) for (ll i = s; i < e; ++i)
#define fir(s, e) for (int i = s-1; i >= e; --i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    int t;  cin >> t;
    while(t--){
        vi v;
        ll n, k;   cin >> n >> k;
        ll a[n];
        fi(0,n) cin>>a[i];
        sort(a,a+n);
        ll cnt = 0 ,mx = 0;
        fi(0,n){
            ++cnt;
            if(i == n-1 || abs(a[i]-a[i+1]) > k) {
                mx = max(cnt,mx);
                cnt=0;
            }
        }
        dn(n-mx);
    }
}