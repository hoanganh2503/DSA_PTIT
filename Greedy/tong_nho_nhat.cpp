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
		ll n, k;
		cin >> n;
		f(i, 0, n-1) {
			cin >> k;
			vt.push_back(k);
		}
		sort(vt.begin(), vt.end());
		ll chan = 0, le = 0;
		f(i, 0, n-1){
			if(i%2 == 0) chan = chan*10 + vt[i];
			else le = le*10 + vt[i];
		}
		cout << chan+le <<endl;
	}
}
