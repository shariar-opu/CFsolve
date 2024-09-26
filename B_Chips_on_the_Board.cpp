#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
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
#define fi(s, e) for (int i = s; i < e; ++i)
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
    int t;
    cin >> t;
    while (t--)
    {
        vll v, c, d;
        ll n;
        cin >> n;
        ll a[n], b[n];
        fi(0, n)
        {
            cin >> a[i];
            v.pb(a[i]);
        }
        fi(0, n)
        {
            cin >> b[i];
            c.pb(b[i]);
        }
        ll m = *min_element(v.begin(), v.end());
        ll k = *min_element(c.begin(), c.end());
        ll sum = 0, sum2 = 0;
        fi(0, n)
        {
            sum += (m + b[i]);
        }
        d.pb(sum);
        fi(0, n)
        {
            sum2 += (k + a[i]);
        }
        d.pb(sum2);
        cout << *min_element(d.begin(), d.end()) << endl;
    }
}