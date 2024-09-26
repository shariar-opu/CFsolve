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
using namespace std;
int main()
{
    optimize();
    set<int>s;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    s.ins(a);
    s.ins(b);
    s.ins(c);
    s.ins(d);

    int ans = 4 - s.size();
    cout << ans << endl;

}