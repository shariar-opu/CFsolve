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
#define ve(u) vector<u>
#define ms(u) multiset<u>
#define us(u) unordered_set<u>
#define s(u) set<u>
#define m(f, s) map<f, s>
#define p(f, s) pair<f, s>
#define vp(f, s) vector<pair<f, s>>
#define sp(f, s) set<pair<f, s>>
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
    int x;  cin >> x;
    int hh, mm; cin >> hh >> mm;

    if(hh == 07 || hh == 17 || mm == 7|| mm == 7|| mm == 17 || mm == 27 || mm == 37 || mm == 47 || mm == 57 ) dn('0');
    else if(7 < mm && mm < 17) cout << (mm - 7)/ x <<endl;
    else if(17 < mm && mm < 27) cout << (mm - 17)/x << endl;
    else if(27 < mm && mm < 37) cout << (mm - 27)/x << endl;
    else if(37 < mm && mm < 47) cout << (mm - 37)/x << endl;
    else if(47 < mm && mm < 57) cout << (mm - 47)/x << endl;
    else cout << ((mm+59)-57)/x << endl;
    
}