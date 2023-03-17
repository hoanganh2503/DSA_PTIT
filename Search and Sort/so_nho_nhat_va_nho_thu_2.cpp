#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n;
	while(t--){
		cin >> n;
		ll arr[n];

		for(ll i = 0 ; i < n; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		(arr[0] != arr[1]) ? cout << arr[0] <<" "<< arr[1] : cout << -1;
		cout << endl;
	}
}
