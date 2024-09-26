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
        vi v;
        string s;
        cin >> s;
        for (int i = 0; s[i] != '\0'; ++i)
        {
            if (s[i] == '1')
                v.pb(1);
            else if (s[i] == '2')
                v.pb(2);
            else if (s[i] == '3')
                v.pb(3);
            else if (s[i] == '4')
                v.pb(4);
            else if (s[i] == '5')
                v.pb(5);
            else if (s[i] == '6')
                v.pb(6);
            else if (s[i] == '7')
                v.pb(7);
            else if (s[i] == '8')
                v.pb(8);
            else if (s[i] == '9')
                v.pb(9);
            else if(s[i] == '0')
                v.pb(10);
        }
        int sum = 0;
        if(v[0] > 1) sum += (v[0] -1);
        sum += abs(v[0] - v[1]);
        sum += abs(v[1] - v[2]);
        sum += abs(v[2] - v[3]);
        dn(sum+4);
    }
}