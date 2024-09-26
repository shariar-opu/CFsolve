#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    vector<char>v;
    char s[101], t[101];
    string temp;
    cin >>s>>t;
    for(int i = strlen(t)-1; i >= 0; i-- ){
        temp+=t[i];
    }
    if (s == temp)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

}
int main()
{
    solve();
}