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
		ll arr[n] = {0}, a[n] = {0}, b[n] = {0};
		ll k = 0;
		for(ll i = 0 ; i < n ; i++){
			cin >> arr[i];
			mp[arr[i]]++;
		}
		
		for(map<ll, ll>::iterator it = mp.begin() ; it != mp.end() ; it++ ) {
			 a[k] = it -> first;
			 b[k] = it -> second;
			 k++;
		}

		for(int i = 0 ; i < k ; i++) {
			for(int j = 0; j < k - 1; j++){
				if(b[j] < b[j+1]){
					swap(b[j], b[j+1]);
					swap(a[j], a[j+1]);
				}
			}
		}

		for(int i = 0 ; i < k ; i++) {
			for(int j = 0; j < b[i]; j++){
				cout << a[i] << " ";
			}
		}
		
		cout << endl;
	}
}
