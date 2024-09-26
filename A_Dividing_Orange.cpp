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
    int n, k;
    cin >> n >> k;
    vi v(k);
    si cnt;
    fi(0, k) cin >> v[i];
    fi(1, (n * k) + 1) cnt.ins(i);
    fe(u, v)
    {
        cnt.erase(cnt.find(u));
    }
    // fe(u,cnt) cout << u << " ";

    vi print;
    int four = 0, plus = 0;
    if (cnt.size() == 0)
    {
        fe(u, v) cout << u << endl;
    }
    else
    {
        fe(u, cnt)
        {
            four++;
            print.pb(u);

            if (four == (n - 1))
            {
                print.pb(v[plus]);
                fe(p, print) cout << p << " ";
                cout << endl;

                four = 0;
                plus++;
                print.clear();
            }
        }
    }
}