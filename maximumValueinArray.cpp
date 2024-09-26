#include <bits/stdc++.h>
using namespace std;
void maxValue(int n)
{
    int arr[n];
    int max;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            cnt ++;
        }
    }
    cout << max << endl;
}
int main()
{
    int size;
    cin >> size;
    maxValue(size);
}