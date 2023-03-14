#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){	
	int t;
	cin >> t;
	ll n, m;
	while(t--){
		int check = -1;
		cin >> n >> m;
		ll arr[n];
		for(ll i = 0 ; i < n; i++){
			 cin >> arr[i];	
			if(arr[i] == m) check = i;
		}
		
		cout << check +1 << endl;
	}
}
