#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define endl '\n'
#define watch(x) cerr << "\n"<< (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define youhua() ios_base ::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pb push_back
#define pp pop_back
#define ins insert
#define ve(u) vector<u>
#define ms(u) multiset<u>
#define us(u) unordered_set<u>
#define se(u) set<u>
#define m(f, s) map<f, s>
#define p(f, s) pair<f, s>
#define vp(f, s) vector<pair<f, s>>
#define sp(f, s) set<pair<f, s>>
#define f(i, e) for (int i = 0; i < e; ++i)
#define rf(j, s) for (int j = s; j >= 0; --j)
#define fe(s, e) for (auto s : e)
#define s(u) sort(u.begin(), u.end())
#define rs(u) sort(u.rbegin(), u.rend())
#define all(u) u.begin(), u.end()
#define rall(u) u.rbegin(), u.rend()
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define dn(a) cout << a << endl
const int N = 1e5 + 123;

int32_t main()
{
    youhua();
    int t;  cin  >>t;
    while(t--){
        int n;  cin>>n;
        int fq[10]={};
        for(int i=0;i<n;i++){
            int temp;   cin>>temp;
            fq[temp%10]++;
        }

        bool ok=0;

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                for(int k=0;k<10;k++){
                    int temp=i+j+k;
                    temp=temp%10;
                    if(temp==3){
                       int t1=fq[i],t2=fq[j],t3=fq[k];
                       fq[i]--; fq[j]--; fq[k]--;
                       if(fq[i]>=0 && fq[j]>=0 && fq[k]>=0)ok=1;
                       fq[i]=t1;fq[j]=t2;fq[k]=t3;
                    }
                }
            }
        }

        ok?cout<<"YES\n":cout<<"NO\n";
    
    }
}