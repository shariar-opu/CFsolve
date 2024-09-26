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
    int x, cnt = 0, sum = 0;
    while (cin >> x)
    {
        if (x == 0)
        {
            break;
        }
        else
        {
            for (int i = x;; i++)
            {

                if (i % 2 == 0)
                {
                    cnt++;
                    sum += i;
                }
                if (cnt == 5)
                {
                    break;
                }
            }
            cout << sum << endl;
            sum *= 0;
            cnt *= 0;
        }
    }
}
int main()
{
    solve();
}