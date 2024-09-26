#include <bits/stdc++.h>
using namespace std;
void arrayManu(int n)
{
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j]){
                arr[i] = -1;
                arr[j] = -1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            cout << arr[i] << endl;
        }
    }
}
int main()
{
    int size;
    cin >> size;
    arrayManu(size);
}