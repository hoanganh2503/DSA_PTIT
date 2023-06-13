#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define f_(i,a,b) for(ll i = a ; i >= b ; i--)
#define F(i,a,b) for(ll i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
#define sz size()
#define pb(x) push_back(x)

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		vector<pair<ll, ll>> vt;
		ll f[n+1];
		f(i, 0, n) f[i] = 1;
	
		f(i, 1, n){
			int a, b;
			cin >> a >> b;
			vt.push_back({a, b});
		}
		sort(all(vt));
		ll ans = 0;
		f(i, 1, n-1){
			f(j, 0, i-1){
				if(vt[i].first > vt[j].second) f[i] = max(f[i], f[j]+1);
			}
			ans = max(ans, f[i]);
		}
		cout << ans << endl;		
	}

}
