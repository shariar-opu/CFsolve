#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl
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
void solve()
{
    int a[5], c[3];
    fi(0, 3) cin >> c[i];
    fi(0, 5) cin >> a[i];

    int c1 = c[0] - a[0];
    int c2 = c[1] - a[1];
    int c3 = c[2] - a[2];

    if (c1 < 0 || c2 < 0 || c3 < 0)
    {
        no;
        return;
    }

    a[3] = max((a[3] - c1), 0);
    a[4] = max((a[4] - c2), 0);

    if (a[3] + a[4] <= c3)
        yes;
    else
        no;
}
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}