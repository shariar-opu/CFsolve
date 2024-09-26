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
const ll N = 1e6;
bool prime[N+123];
s(ll)v;
int main()
{
    optimize();
    prime[0]= prime[1] = 1;
    for(ll i = 2; i*i <= N; i++){
        if(!prime[i]){
            for(ll j= i*i; j <= N; j+=i){
                prime[j] = 1;
            }
        }
    }
    fi(2,N+1){
        if(!prime[i]) v.ins(i*i);
    }
    ll n;  cin >> n;
    ll arr[n+123];
    fi(0,n){
        cin >> arr[i];
        if(v.find(arr[i]) != v.end())yes;
        else no;
    }
}