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
#define sort(u) sort(u.begin(), u.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    int n;
    cin >> n;
    int div = n / 2;
    string s;
    cin >> s;
    map<char, int> m;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        m[s[i]]++;
    }
    string need;
    int mx = 0;
    fe(u, m)
    {
        mx = max(mx, u.second);
    }
    fe(u, m)
    {
        if (u.second == mx)
            need = u.first;
    }
    int cnt = mx - div;
    while (cnt--)
    {
        if (need == "x")
        {
            for (int i = 0; s[i] != '\0'; ++i)
            {
                if (s[i] == need[0])
                {
                    s[i] = 'X';
                    break;
                }
            }
        }
        else
        {
            for (int i = 0; s[i] != '\0'; ++i)
            {
                if (s[i] == need[0])
                {
                    s[i] = 'x';
                    break;
                }
            }
        }
    }
    dn(mx - div);
    dn(s);
}