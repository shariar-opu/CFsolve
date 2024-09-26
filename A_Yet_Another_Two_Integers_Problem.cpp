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
        ll a, b;
        cin >> a >> b;
        ll need = 0;
        if (a > b)
        {
            need = (a - b) / 10;
            if ((a - b) % 10 > 0)
                cout << need + 1 << endl;
            else
                cout << need << endl;
        }
        else if (a < b)
        {
            need = (b - a) / 10;
            if ((b - a) % 10 > 0)
                cout << need + 1 << endl;
            else
                cout << need << endl;
        }
        else
        {
            need *= 0;
            cout << need << endl;
        }
    }
}