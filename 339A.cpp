#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define ins insert
#define N 100
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
using namespace std;
void solve()
{
    vector<char>v;
    char a[N+1];
    cin >>a;
    for(int i = 0; a[i] != '\0'; i++){
        if(a[i] == '+'){
            continue;
        }
        v.pb(a[i]);
    }
    sort(v.begin(),v.end());
    cout << v[0];
    for(int i = 1; i < v.size(); i++){
        cout <<"+" << v[i];
    }
}
int main()
{
    solve();
}