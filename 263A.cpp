#include <bits/stdc++.h>
#define N 5
int ans = 3;
int sum = 0;
using namespace std;
void solve()
{
    int arr[N][N];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (arr[i][j] == 1)
            {
                sum = (abs(ans - i)) + (abs(ans - j));
            }
        }
    }
    cout << sum << endl;
}
int main()
{
    solve();
}