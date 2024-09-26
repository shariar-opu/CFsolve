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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    if (k == n)
    {
        for (int i = s.size() - 1; i >= 1; --i)
        {
            cout << "PRINT " << s[i] << endl;
            cout << "LEFT" << endl;
        }
        cout << "PRINT " << s[0] << endl;
    }
    else if( k == 1){
        fi(0,n-1){
            cout << "PRINT " << s[i] << endl;
            cout << "RIGHT" << endl;
        }
        cout << "PRINT " << s[n-1] << endl;
    }
    else
    {
        if (n / 2 < k)
        {
            fi(k, n)
            {
                cout << "RIGHT" << endl;
            }
            for (int i = s.size() - 1; i >= 1; --i)
            {
                cout << "PRINT " << s[i] << endl;
                cout << "LEFT" << endl;
            }
            cout << "PRINT " << s[0] << endl;
        }
        else if (n/2 == k){
            for(int i = k - 2; i >=0; --i){
                cout << "LEFT" << endl;
            }
            fi(0, n-1)
            {
                cout << "PRINT " << s[i] << endl;
                cout << "RIGHT" << endl;
            }
            cout << "PRINT " << s[n-1] << endl;
        }
        else
        {
            for (int i = k - 2; i >= 0; --i)
            {
                cout << "LEFT" << endl;
            }
            fi(0, n-1)
            {
                cout << "PRINT " << s[i] << endl;
                cout << "RIGHT" << endl;
            }
            cout << "PRINT " << s[n-1] << endl;
        }
    }
}