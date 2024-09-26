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
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define y cout << "YES" << endl
#define n cout << "NO" << endl
using namespace std;
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;

        ll a, b;
        a = cbrt(x);
        b = cbrt(x - pow(a, 3));

        cout << a << " " << b << endl;

        ll sum = pow(a, 3) + pow(b, 3);

        cout << sum << endl;

        (sum == x) ? y : n;
    }
}