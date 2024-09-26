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
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
using namespace std;
const int N = 1e5 + 123;
bool vis[N];
int main()
{
    optimize();
    vector<int>v;
    int k , l ,m ,n ,d;
    cin >> k >> l >> m >> n >> d;
    fi(1,d){
        if( i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0){
            // vis[i] = true;
            v.pb(i);
        }
    }
    cout << v.size() << endl;
}