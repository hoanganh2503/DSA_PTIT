#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll handle(ll arr[], ll a, ll b) {
	ll max = arr[a];
	for(ll i = a ; i <= b ; i++){
		if(arr[i] > max) max = arr[i];
	}
	return max;
}

int main(){	
	int t;
	cin >> t;
	ll n, k;
	while(t--){
		cin >> n >> k;
		ll arr[n];
	
		for(ll i = 1 ; i <= n; i++){
			cin >> arr[i];
		}
		for(ll i = 1; i <= n-k+1 ; i++){
			cout << handle(arr, i, i+k-1) << " ";
		}
		cout << endl;
	}

}
