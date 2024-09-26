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
    string s;
    cin >> s;
    int zero = 0, one = 0;
    if (s.size() > 7)
    {
        fi(0, s.size() - 1)
        {
            if (s[i] == '0')
            {
                if (zero >= 7)
                    break;
                else
                {
                    fj(i, i + 7)
                    {
                        if (s[j] == s[i])
                            zero++;
                        else
                        {
                            zero = 0;
                            break;
                        }
                    }
                }
            }
            else
            {
                if (one >= 7)
                    break;
                else
                {
                    fj(i, i + 7)
                    {
                        if (s[j] == s[i])
                            one++;
                        else
                        {
                            one = 0;
                            break;
                        }
                    }
                }
            }
        }
    }
    else
    {
        zero = 0;
        one = 0;
    }
    // cout << zero << " " << one << endl;
    if(zero >= 7 || one >= 7)yes;
    else no;
}