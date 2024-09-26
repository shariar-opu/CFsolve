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
// #define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
// #define fk(s, e) for (int k = s; k < e; ++k)
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
        int x, y;
        cin >> x >> y;
        int div = 0;
        bool ok = 1;
        for (int i = 0;; ++i)
        {
            int need = x * pow(10, i);
            if (need > y)
            {
                div = i - 1;
                break;
            }
        }
        int k = x * pow(10, div);
        if (y % k == 0)
        {
            div = y / k;
        }
        else
        {
            div = y / k;
            y %= k;
            while (y != 0)
            {
                if (y >= x)
                {
                    div += y / x;
                    y %= x;
                }
                else
                {
                    div += y;
                    y -= y;
                }
            }
        }

        dn(div);
    }
}