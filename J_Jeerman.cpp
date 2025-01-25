#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pii pair<int, int>
#define F first
#define S second
#define pb push_back
const int inf = 0x3f3f3f3f;
inline int rd()
{
    int x = 0, y = 1;
    char c = getchar();
    for (; c < '0' || c > '9'; c = getchar())
        if (c == '-')
            y = -1;
    for (; c >= '0' && c <= '9'; c = getchar())
        x = (x << 1) + (x << 3) + (c ^ 48);
    return x * y;
}
const int N = 14 + 5, _ = 1 << 10;
struct nd
{
    int x, y, z;
} fr[N][_][N];
int n, m, sum, f[N][_][N], ls[N][N][N], ans, num[N];
string s[N];
char res[N];
int popcnt(int x)
{
    int s = 0;
    for (; x; x >>= 1)
        s += x & 1;
    return s;
}
signed main()
{
    n = rd();
    m = rd();
    for (int i = 0; i < m; i++)
    {
        cin >> s[i];
        sum += s[i].size();
    }
    if (sum <= n)
    {
        for (int i = 0; i < m; i++)
            cout << s[i];
        n -= sum;
        for (int i = 1; i <= n; i++)
            cout << 'a';
        cout << '\n';
        return 0;
    }
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            if (s[i].find(s[j]) != -1)
                num[i] |= 1 << j;
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < m; j++)
            if (s[j].size() <= i)
                f[i][num[j]][j] = 1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < m; j++)
            if (i ^ j)
            {
                for (int k = 0; k < min(s[i].size(), s[j].size()); k++)
                {
                    bool flg = 0;
                    for (int l = 0; l <= k; l++)
                        if (s[j][l] != s[i][s[i].size() - k - 1 + l])
                            flg = 1;
                    if (!flg)
                        ls[i][j][k + 1] = 1;
                }
            }
    for (int i = n; i; i--)
    {
        for (int j = 0; j < 1 << m; j++)
            for (int k = 0; k < m; k++)
                if ((j & num[k]) == num[k] && s[k].size() <= i)
                {
                    for (int l = i + 1; l <= n; l++)
                        for (int q = 0; q < m; q++)
                            if ((j & num[q]) == num[q] && (j & num[k]) == num[k] && (q != j))
                            {
                                int len1 = s[k].size(), len2 = s[q].size();
                                if (i - len1 + 1 >= l - len2 + 1)
                                    continue;
                                if (i - (l - len2 + 1) + 1 > 0 && !ls[k][q][i - (l - len2 + 1) + 1])
                                    continue;
                                if (f[l][j ^ num[k]][q])
                                {
                                    f[i][j][k] = 1;
                                    fr[i][j][k] = {l, j ^ num[k], q};
                                }
                            }
                }
        for (int j = (1 << m) - 1; ~j; j--)
        {
            for (int k = j; k; k = (k - 1) & j)
            {
                for (int l = 0; l < m; l++)
                    if (f[i][j][l])
                    {
                        f[i][k][l] = 1;
                        fr[i][k][l] = fr[i][j][l];
                    }
            }
        }
    }
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < 1 << m; j++)
            for (int k = 0; k < m; k++)
                if (popcnt(j) > ans && f[i][j][k])
                    ans = popcnt(j);
    for (int i = 1; i <= n; i++)
        for (int j = 0; j < 1 << m; j++)
            for (int k = 0; k < m; k++)
                if (popcnt(j) == ans && f[i][j][k])
                {
                    int x = i, y = j, z = k;
                    for (int num = 1; num <= n; num++)
                        res[num] = 'a';
                    while (y)
                    {
                        for (int i = x; i >= x - s[z].size() + 1; i--)
                        {
                            res[i] = s[z][i - x + s[z].size() - 1];
                        }
                        int x2, y2, z2;
                        x2 = fr[x][y][z].x;
                        y2 = fr[x][y][z].y;
                        z2 = fr[x][y][z].z;
                        x = x2;
                        y = y2;
                        z = z2;
                        // cout<<x<<' '<<y<<' '<<z<<'\n';
                    }
                    for (int i = 1; i <= n; i++)
                        cout << res[i];
                    cout << '\n';
                    return 0;
                }
    for (int i = 1; i <= n; i++)
        cout << 'a';
    cout << '\n';
    return 0;
}