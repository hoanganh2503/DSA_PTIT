#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n;
	while(t--) {
		cin >> n;
		ll arr[n];
		ll sum = 0, total_sum = 0;
		for(ll i = 0 ; i < n ; i++){
			cin >> arr[i];
			total_sum += arr[i];
		}
		int check = 1;
		for(ll i = 0 ; i < n ; i++){	
			total_sum-= arr[i];
			if(i != 0) sum += arr[i-1];
			if(total_sum == sum && i != 0 && i != n-1) {
				check = 0;
				cout << i + 1;
				break;
			}
		}
		if(check) cout << -1;
		cout << endl;
	}
}
