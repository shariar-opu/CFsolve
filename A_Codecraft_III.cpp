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
void month(int n)
{
    switch (n)
    {
    case 1:
        cout << "January" << endl;
        break;
    case 2:
        cout << "February" << endl;
        break;
    case 3:
        cout << "March" << endl;
        break;
    case 4:
        cout << "April" << endl;
        break;
    case 5:
        cout << "May" << endl;
        break;
    case 6:
        cout << "June" << endl;
        break;
    case 7:
        cout << "July" << endl;
        break;
    case 8:
        cout << "August" << endl;
        break;
    case 9:
        cout << "September" << endl;
        break;
    case 10:
        cout << "october" << endl;
        break;
    case 11:
        cout << "November" << endl;
        break;
    case 12:
        cout << "December" << endl;
        break;
    }
}
int monthNum(string s)
{
    int n = 0;
    if (s == "January")
        n = 1;
    if (s == "February")
        n = 2;
    if (s == "March")
        n = 3;
    if (s == "April")
        n = 4;
    if (s == "May")
        n = 5;
    if (s == "June")
        n = 6;
    if (s == "July")
        n = 7;
    if (s == "August")
        n = 8;
    if (s == "September")
        n = 9;
    if (s == "October")
        n = 10;
    if (s == "November")
        n = 11;
    if (s == "December")
        n = 12;
    return n;
}
int main()
{
    optimize();
    string s;
    cin >> s;
    int n;
    cin >> n;
    int sum = monthNum(s) + n;
    bool ok = true;
    while (ok)
    {
        if (sum > 12)
        {
            sum -= 12;
        }
        else
        {
            ok = false;
            month(sum);
        }
    }
}