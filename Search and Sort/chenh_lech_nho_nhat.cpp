#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n;
	while(t--) {
		cin >> n;
		ll arr[n], a[n], k = 0;
		ll min = 99999999;
		for(ll i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		for(int i = 0 ; i < n ; i++){
			if(abs(arr[i+1]-arr[i]) < min) 
				min = abs(arr[i+1]-arr[i]);
		}
		cout << min << endl;
	}
}
