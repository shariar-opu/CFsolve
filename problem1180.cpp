#include <bits/stdc++.h>
using namespace std;
void solve(int n)
{
    int min = INT_MAX;
    int arr[n];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
            cnt = i;
        }
    }
    cout << "Menor valor: " << arr[cnt] << endl;
    cout << "Posicao: " << cnt << endl;
}
int main()
{
    int size;
    cin >> size;
    solve(size);
}