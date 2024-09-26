#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define time cerr << "time = " << clock() << " ms" << '\n'
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define vi vector<int>
#define vll vector<ll>
#define msi multiset<int>
#define usi unordered_set<int>
#define si set<int>
#define mii map<int, int>
#define pii pair<int, int>
#define psi pair<string, int>
#define vpii vector<pii>
#define spii set<pii>
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    int n;
    cin >> n;
    vi v;
    int sum = 0, coin = 0;
    fi(0, n)
    {
        int a;
        cin >> a;
        v.pb(a);
    }
    sort (v.rbegin(), v.rend());
    if (n <= 1)
        coin = n;
    else
    {
        int mx = v[0];
        fi(1,n){
            sum+=v[i];
        }
        fi(1,n){
            if(sum >= mx){
                sum -= v[i];
                mx+=v[i];
            }
        }
        fe(u,v){
            if(mx >= u){
                mx -= u;
                coin ++;
            }
            else continue;
        }
    }
    dn(coin);
    watch(coin);
}