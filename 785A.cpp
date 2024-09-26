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
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn cout << cnt << endl;
const int N = 1e5 + 123;
bool vis[N];
using namespace std;
int main()
{
    optimize();
    int n; cin >> n;
    int sum = 0;
    while (n--){
        string s; cin >> s;
        if(s == "Tetrahedron") sum += 4;
        else if(s == "Cube") sum += 6;
        else if(s == "Octahedron") sum += 8;
        else if ( s == "Dodecahedron") sum += 12;
        else if (s == "Icosahedron") sum += 20;
    }
    cout << sum << endl;
    sum *= 0;
}