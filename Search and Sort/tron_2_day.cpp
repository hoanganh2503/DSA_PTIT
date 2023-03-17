#include<bits/stdc++.h>
#define ll long long
#include <cstring>

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n, m;
	while(t--){
		cin >> n >> m;
		ll arr[n+m];
		for(ll i = 0 ; i < n+m ; i++) cin >> arr[i];
		sort(arr, arr+m+n);
		
		for(ll i = 0 ; i < n+m ; i++)
			cout << arr[i]<<" ";
		cout << endl;
	}
}
