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
    char str[101];
    cin >> str;
    set <char>s;
    for (int i = 0; str[i] != '\0'; i++)
    {
        s.ins(str[i]);
    }
    if(s.size() % 2 ==0){
       cout << "CHAT WITH HER!" << endl;
    }
    else{
        cout << "IGNORE HIM!" << endl;
    }

}
int main()
{
    solve();
}