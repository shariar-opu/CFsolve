#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = 0;; i++)
    {
        if (a <= b)
        {
            a *= 3;
            b *= 2;
            cnt++;
        }
        else
        {
            break;
        }
    }
    cout << cnt << endl;
}
int main()
{
    solve();
}