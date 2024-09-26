#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define endl '\n'
#define watch(x) cerr << "\n" \
                      << (#x) << " is " << (x) << endl
#define time cerr << "time = " << clock() << " ms" << '\n'
#define youhua()                   \
    ios_base ::sync_with_stdio(0); \
    cin.tie(0);                    \
    cout.tie(0);
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
    int t;  cin >> t;
    while(t--){
        int sum = 0;
        int n;  cin >> n;
        ve(int)arr(n);
        f(i,n) cin >> arr[i], sum += arr[i];
        ve(int)presum(n);
        presum[0] = arr[0];
        for(int i = 1; i <  n; i++){
            presum[i]=presum[i-1]+arr[i];
        }
        rs(presum);
        int cnt = 0, ct = 0;
        if(sum % 3== 0) cout << 0 << endl;
        else{
            rf(i,n-1){
                sum-=arr[i];
                cnt ++;
                if(sum%3 == 0)break;
                else {
                    sum+=arr[i];
                    cnt--;
                }
            }
            int mn  = 0;
            for(int i = 0; i < n; i++){
                if(presum[i] %3 !=0){
                    mn ++;
                }
                else break;
            }
            if(cnt == 0) cnt = mn;
            cnt = min(cnt,mn);
            bool ok = 1;
            while(ok){
                sum++;
                ct++;
                if(sum%3==0){
                    ok = 0;
                }
            }
            cout << min(ct,cnt) << endl;
        }
       
    }
}