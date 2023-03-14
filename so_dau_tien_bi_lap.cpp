#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n, k =  0;
	map<ll, ll> mp;
	while(t--) {
		bool check = false;
		mp.clear();
		cin >> n;
		ll arr[n];
		for(ll i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		for(ll i = 0 ; i < n ; i++){
			for(ll j = i+1 ; j < n ; j++){
				
				if(arr[j] == arr[i]){
					cout << arr[i] << endl;
					check = true;
					break;
				}
			}
			if(check) break;
		}
		if(check == false) cout << "NO" << endl;
	}
}
