#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)

using namespace std;

int main() {
	int t ;
	cin >> t;
	ll e = 1e9 + 7;
	vector<ll> vt;
	while(t--){
		vt.clear();
		ll sum = 0;
		ll n, k;
		cin >> n;
		f(i, 0, n-1) {
			cin >> k;
			vt.push_back(k);
		}
		sort(vt.begin(), vt.end());
		f(i, 0, n-1){
			sum += (vt[i]*i) % e;
		}
		cout << sum <<endl;
	}
}
