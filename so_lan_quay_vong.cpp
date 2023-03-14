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
		ll min = 99999999;
		ll imin = 0;
		for(ll i = 0 ; i < n ; i++){
			cin >> arr[i];	
			if(arr[i] < min) {
				min = arr[i];
				imin = i;
			}
		}
		cout << imin << endl;
	}
}
