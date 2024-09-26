#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int max = INT_MIN;
    int arr[n];
    int cnt = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            cnt = i;
        }
    }
    arr[cnt] = -1;
    int max2;
    for (int i = 0; i < n; i++)
    {
        if (max2 < arr[i] && max != arr[i])
        {
            max2 = arr[i];
        }
    }
    cout << max2 << endl;
}
int main()
{
    int size;
    cin >> size;
    solve(size);
}