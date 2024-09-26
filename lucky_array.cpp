#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fi(s, e) for (int i = s; i <= e; ++i)
#define fj(s, e) for (int j = s; j <= e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn cout << cnt << endl
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    vector<int> v;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        fi(1, n) cin >> a[i];
        fi(1, n)
        {
            fj(i + 1, n)
            {
                int sum = a[i] + a[j] + (j - i);
                v.pb(sum);
            }
        }
        sort(v.begin(), v.end());
        //fe(u,v) cout << u << endl;
        cout << v[0] << endl;
        v.clear();
    }
}