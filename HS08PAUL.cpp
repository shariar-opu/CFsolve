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
#define fi(s, e) for (int i = s; i < e; ++i)
#define fj(s, e) for (int j = s; j < e; ++j)
#define fk(s, e) for (int k = s; k < e; ++k)
#define fe(s, e) for (auto s : e)
#define sort(u) sort(u.begin(), u.end())
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e7;
int need[N+123];
int prime[N+123];
ve(int) v;
void seive(){
    for(int i = 3; i*i<N; i+=2){
        if(!prime[i]){
            for(int j = i*i; j<N; j+=i+i){
                prime[j] = true;
            }
        }
    }
    v.pb(2);
    for(int i = 3; i <N; i++){
        if(!prime) v.pb(i);
    }
}
bool isprime(int a)
{
    for (auto i: prime)
    {
        if(i*i>a) break;
        if (a % i == 0)
            return false;
    }
    return true;
} 
int main(){
    seive();
    int x, y;
    for(int i = 1; (x=i*i) <= N; i++){
        for(int j = 1; ((y=j*j*j*j)+x )<= N; j++){
            if(!prime[x+y]){
                need[x+y] = true;
            }
        }
    }
    int t;  cin >> t;
    while(t--){
        int n;  cin >> n;
        int cnt = 0;
        for(int i = 2; i <= n; i++){
            if(need[i]) cnt++;
        }
        cout << cnt << endl;
    }
}