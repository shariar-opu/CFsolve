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
    int n;
    cin >> n;
    int x, y, cnt = 0, sum = 0;
    while (n--)
    {
        cin >> x >> y;
        for (int i = x;; i++)
        {
            if (i % 2 != 0)
            {
                cnt++;
                sum += i;
            }
            if (cnt == y)
            {
                break;
            }
        }
    cout << sum << endl;
    cnt *=0;
    sum*= 0;
    }
}
int main()
{
    solve();
}