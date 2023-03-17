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
		ll n, k, l, sum = 0, sum1 = 0;
		cin >> n >> k;
		f(i, 0, n-1) {
			cin >> l;
			sum += l;
			vt.push_back(l);
		}
		sort(vt.begin(), vt.end());
		int min1 = min(k, n-k);
		f(i, 0, min1-1){
			sum1+=vt[i];
		}
		cout << abs(sum - 2*sum1)<<endl;
	}
}
