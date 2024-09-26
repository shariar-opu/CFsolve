#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define n 10
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    int arr[n];
    vector<int> v;
    int x;
    cin >> x;
    int temp = x;
    v.pb(temp);
    for (int i = 0; i < n; i++)
    {
        int ans = temp * 2;
        v.pb(ans);
        temp = ans;
    }
    for (int i = 0; i < n; i++)
    {
        cout << "N[" << i <<"] = " << v[i] << endl; 
    }
}
int main()
{
    solve();
}