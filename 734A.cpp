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
    int n, anton = 0, danik = 0;
    cin >> n;
    char str[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> str[i];
    }
    for (int i = 0; str[i] != '\0'; i++)
    {
        // if (str[i] == 'A' || str[i] == 'D')
        // {
        if (str[i] == 'A')
        {
            anton++;
        }
        else if (str[i] == 'D')
        {
            danik++;
        }
        // }
    }
    if (anton > danik)
    {
        cout << "Anton" << endl;
    }
    else if (anton < danik)
    {
        cout << "Danik" << endl;
    }
    else
    {
        cout << "Friendship" << endl;
    }
}
int main()
{
    solve();
}