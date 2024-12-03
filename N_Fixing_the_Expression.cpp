#include <bits/stdc++.h>
#define e "\n";
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string r;
        cin >> r;
        int a = r[0] - '0', b = r[2] - '0';

        if(a > b) cout << a << '>' << b << endl;
        else if(a < b) cout << a << '<' << b << endl;
        else cout << a << '=' << b << endl;
    }
}