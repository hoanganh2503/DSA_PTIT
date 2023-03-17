#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll countTriplets(ll arr[], ll n, ll sum) {
	sort(arr, arr+n);
	ll ans = 0;
	for(ll  i = 0 ; i < n-2 ; i++){
		ll j = i + 1, k = n-1;
		k = n-1;
		while(j < k) {
			if(arr[i] + arr[j] + arr[k] >= sum) k--;
			else {
				ans += k-j;
				j++;
			}
		}
	}
	return ans;
}

int main(){	
	int t;
	cin >> t;
	ll n, m;
	while(t--) {
		cin >> n >> m;
		ll arr[n], count = 0;
		for(ll i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		ll ans = countTriplets(arr, n, m);
		cout << ans << endl;
	}
}
