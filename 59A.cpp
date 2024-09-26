#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define haha for (int i = 0; str[i] != '\0'; i++)
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    char str[101];
    cin >> str;
    int upper = 0, lower = 0;
    haha
    {
        if (str[i] >= 97)
        {
            lower++;
        }
        else
        {
            upper++;
        }
    }
    if (upper == lower)
    {
        haha
        {
            if (str[i] < 97)
            {
                str[i] += 32;
            }
        }
    }
    else if (lower > upper)
    {
        haha
        {
            if (str[i] < 97)
            {
                str[i] += 32;
            }
        }
    }
    else
    {
        haha
        {
            if (str[i] >= 97)
            {
                str[i] -= 32;
            }
        }
    }
    cout << str << endl;
}
int main()
{
    solve();
}