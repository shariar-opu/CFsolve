#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define pii pair<int, int>
#define psi pair<string, int>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s) for(auto u : s )
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    set<char>s;
    string a;
    getline(cin , a);
    for(int i = 0; a[i] != '\0'; ++i){
        // cout << a[i] << endl;
        if(a[i] == ',' || a[i] == '{' || a[i] == '}' || a[i] == ' ') continue;
        else s.ins(a[i]);
    }
    cout << s.size() << endl;


}