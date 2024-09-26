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
    int k, n, w, sum = 0;
    cin >> k >> n >> w;
    for (int i = 1; i <= w; i++)
    {
        sum += i * k;
    }
    int result = sum - n;
    if (result < 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << result << endl;
    }
}
int main()
{
    solve();
}