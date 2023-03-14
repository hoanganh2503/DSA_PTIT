#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n;
	map<ll, ll> mp;
	while(t--) {
		mp.clear();
		cin >> n;
		ll arr[n];
		for(ll i = 0 ; i < n ; i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
	
	ll max = -99999999, imax = 0;
	for(map<ll, ll>::iterator it = mp.begin() ; it != mp.end() ; it++){
		if(it->second > max) {
			max = it->second;
			imax = it->first;
		}
	}
	if(mp[imax] > n/2) cout << imax << endl;
	else cout << "NO" << endl;
}
}
