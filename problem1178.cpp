#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define n 100
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    vector<double> v;
    double x;
    cin >> x;
    double temp = x;
    v.pb(temp);
    for (int i = 0; i < n; i++)
    {
        double ans = temp / 2;
        v.pb(ans);
        temp = ans;
    }
    for (int i = 0; i < n; i++)
    {
        cout <<fixed << setprecision(4)<< "N[" << i <<"] = " << v[i] << endl; 
    }
}
int main()
{
    solve();
}