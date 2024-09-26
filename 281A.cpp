#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define N 1000
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    char str[N];
    cin >> str;
    // for(int i = 0; str[i] != '\0'; i++){
    if (str [0] >= 97){
        str[0]-=32;
    }
    // }
    cout << str << endl;
}
int main()
{
    solve();
}