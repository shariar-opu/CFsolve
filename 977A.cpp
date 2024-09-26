#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define ayhay for (int i = 0; i < k; i++)
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    ll n;
    int k;
    cin >> n >> k;
   ayhay
    {
        ll r = n % 10;
        if (r == 0)
        {
            n /= 10;
            r = n % 10;
        }
        else
        {
            n--;
        }
    }
    cout << n << endl;
}
int main()
{
    solve();
}