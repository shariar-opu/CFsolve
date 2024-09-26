#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define lld long long double
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
using namespace std;
int main()
{
    optimize();
    int n, t;
    cin >> n >> t;
    string s;
    cin >> s;

    while (t--)
    {
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'G')
            {
                char tmp = s[i];
                s[i] = s[i + 1];
                s[i + 1] = tmp;
                ++i;
            }
        }
    }

    for (auto u : s) cout << u;
    cout << endl;
}