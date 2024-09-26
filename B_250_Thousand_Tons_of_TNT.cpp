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
#define ve(u) vector<u>
#define ms(u) multiset<u>
#define us(u) unordered_set<u>
#define se(u) set<u>
#define m(f, s) map<f, s>
#define p(f, s) pair<f, s>
#define vp(f, s) vector<pair<f, s>>
#define sp(f, s) set<pair<f, s>>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define MX(u) *max_element(u.begin(), u.end())
#define MN(u) *min_element(u.begin(), u.end())
#define sort(u) sort(u.begin(), u.end())
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
        // input
        int n;
        cin >> n;
        ve(int) v(n);
        fi(0, n) cin >> v[i];

        ll ans = INT_MIN;

        // divisor of n
        se(int) s;
        for (int i = 1; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                s.ins(i);
                s.ins(n / i);
            }
        }
        // output
        fe(u, s)
        {
            ve(ll) test;
            int q = u;
            ll mx = -1e18;
            ll mn = 1e18;
            for (int i = 0; i < n; i += u)
            {
                ll sum = 0;
                int cnt = i;
                while (q--)
                {
                    sum += v[cnt];
                    cnt++;
                }
                q = u;
                mx = max(mx, sum);
                mn = min(mn, sum);
            }
            ans = max(ans, mx - mn);
        }
        dn(ans);
    }
}