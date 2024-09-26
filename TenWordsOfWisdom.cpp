#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define ins insert
#define ll long long
#define endl '\n'
#define optimize()                \
    ios_base ::sync_with_stdio(); \
    cin.tie();                    \
    cout.tie();
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> v;
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v.pb({a, b});
        }
        ll mx = INT_MIN, index;
        for (int i = 0; i < n; i++)
        {
            if (v[i].first <= 10 && v[i].second > mx)
            {
                mx = v[i].second;
                index = i;
            }
        }

        cout << (index + 1) << endl;
    }
    cerr << "time = " << clock() << " ms" << endl;
}