#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define watch(x) cerr << "\n" << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
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
const int N = 1e6 + 123;
vi is_prime;
bool prime[90000001];
void seive(){
    int mxN = 90000000;
    prime[0] = prime[1] = true;
    for(int i = 2; i*i <= mxN; i++){
        if(!prime[i]){
            for(int j = i*i; j<=mxN; j+=i){
                prime[j] = true;
            }
        }
    }
    for(int i = 2; i <= mxN; ++i){
        if(!prime[i]) is_prime.pb(i);
    }
}

int main()
{
    optimize();
    int t;  cin >> t;
    seive();
    while(t--){
        int n;  cin >> n;
        cout << is_prime[n-1] << endl;
    }
}