#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define optimize()                 \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define ve(u) vector<u>
#define ms(u) multiset<u>
#define us(u) unordered_set<u>
#define s(u) set<u>
#define m(f, s) map<f, s>
#define p(f, s) pair<f, s>
#define vp(f, s) vector<pair<f, s>>
#define sp(f, s) set<pair<f, s>>
#define fi(s, e) for (ll i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define sort(u) sort(u.begin(), u.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;
int main()
{
    optimize();
    ll sum = 0;
    ll n,q;    cin >> n >> q;
    ve(ll) arr(n);
    fi(0,n){
        cin >> arr[i];
        sum+=arr[i];
    }
    m(ll,ll) ppp;
    ll p = 0;
    while(q--){
        ll t;  cin >> t;
        if(t == 1){
            ll point,x;   cin >> point >> x;
            if(p==0){
                sum -=arr[point-1];
                sum+= x;
                arr[point-1] = x;
            }
            else {
                if(ppp[point] == 0){
                    sum -= p;
                    sum += x;
                    ppp[point] = x;
                }
                else {
                    sum -=ppp[point];
                    sum += x;
                    ppp[point] = x;
                }
            }
        }
        else{
            ll x;   cin >> x;
            sum = x*n;
            ppp.clear();
            p = x;
        }
        cout << sum << endl;
    }
}