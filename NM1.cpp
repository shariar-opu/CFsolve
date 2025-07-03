#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'

void solve(int tc){
	ll n, k;	cin >> n >> k;

	vector<ll> ans;
	for(ll i = 1; i * i <= n; i++){
		if(n % i == 0){
			ans.push_back(i);
			if(i != n / i) ans.push_back(n / i);
		}
	}
	sort(ans.begin(), ans.end());
	ll divCnt = ans.size();

	if(divCnt < k) cout << -1 << endl;
	else cout << ans[k - 1] << endl;
}

int32_t main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    
    int t = 1;
    // cin >> t;
    for(int i = 1; i <= t; i++) solve(i);

    return 0;
}