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
int main()
{
    optimize();
    int t;
    cin >> t;
    while (t--)
    {
        int difH = 0;
        int difM = 0;
        vpii v,v1;
        int n, H, M;
        cin >> n >> H >> M;
        for (int j = 0; j < n; j++)
        {
            int Hi, Mi;
            cin >> Hi >> Mi;
            v.pb({Hi, Mi});
        }
        fe(u, v)
        {
            if (u.first < 24 && u.second < 60)
            {
                if (H == u.first && M == u.second)
                {
                    v1.pb({0,0});
                }
                else if (H < u.first)
                {
                    difH = u.first - H;
                    if (M <= u.second)
                    {
                        difM = u.second - M;
                    }
                    else
                    {
                        difM = (60 - M) + u.second;
                        difH -= 1;
                    }
                    v1.pb({difH,difM});
                }
                else if (H > u.first)
                {
                    difH = (24 - H) + u.first;
                    if (M <= u.second)
                    {
                        difM = u.second - M;
                    }
                    else
                    {
                        difM = (60 - M) + u.second;
                        difH -= 1;
                    }
                    v1.pb({difH,difM});
                }
                else{
                    difH = 0;
                    if (M < u.second)
                    {
                        difM = u.second - M;
                    }
                    else
                    {
                        difM = (60 - M) + u.second;
                        difH = 24 - 1;
                    }
                    v1.pb({difH,difM});
                }
            }
        }
        sort(v1.begin() , v1.end());
        cout << v1[0].first << " " << v1[0].second << endl;
        // fe(u,v1) cout << u.first  << " " << u.second << endl;
    }
}