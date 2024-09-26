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
    int x, y, cnt = 0, sum = 0;
    cin >> x >> y;
    while(y <= 0)
    {
        cin >> y;
    }

    for (int i = x;; i++)
    {

        cnt++;
        sum += i;
        if (cnt == y)
        {
            break;
        }
    }
    cout << sum << endl;
}
int main()
{
    solve();
}