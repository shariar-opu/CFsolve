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
#define fi(s, e) for (int i = s; i <= e; ++i)
#define fj(s, e) for (int j = s; j <= e; ++j)
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
    int r ,c;
    cin >> r >> c;
    int a[r][c];

    int cnt = 0;

    fi(1,r){
        fj(1,c){
            if(i % 2 != 0 ){
                cout << "#";
            }
            else {
                if(i % 4 != 2) {
                    if(j == 1) cout << "#";
                    else cout << "."; 
                }
                else {
                    if(j == c) cout << "#";
                    else cout << "."; 
                }
            }
        }
        cout << endl;
    }
}