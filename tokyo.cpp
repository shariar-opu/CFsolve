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
#define fk(s, e) for (int k = s; k < e; ++k)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
int main()
{
    optimize();
    vector<int> v, hi;
    while (true)
    {
        while (true)
        {
            int n;
            cin >> n;
            if (n > 0)
                v.pb(n);
                hi.pb(n*2);
            if (n == 0)
            {
                int ans = 0, cnt = 0;
                fi(0, v.size())
                {
                    fj(0, hi.size())
                    {
                        if(v[i] == hi[j]) cnt++;
                    }
                }
                cout << cnt << endl;
                cnt *= 0;
                v.clear();
                hi.clear();
            }
            if (n == -1)
                return false;
        }
    }
}