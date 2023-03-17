#include<bits/stdc++.h>
#define ll long long
#include <cstring>

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n, m;
	map<ll, ll> mp;
	while(t--){
		mp.clear();
		cin >> n;
		ll arr[n];
		ll max = -99999999;
		ll min = 99999999;
		ll length = 0;
		for(ll i = 0 ; i < n; i++){
			 cin >> arr[i];	
			 if(mp[arr[i]] == 0) length++;
			 mp[arr[i]]++;
			 if(arr[i] > max) max = arr[i];
			 if(arr[i] < min) min = arr[i];
		}
		
		cout <<max - min + 1 - length;
		cout << endl;
	}
}
