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
		ll a[n], b[m];
		ll max = -999999999;
		ll min = 999999999;
		for(ll i = 0 ; i < n ; i++){
			 cin >> a[i];	
			 if(a[i] > max) max = a[i];
		}
		for(ll j = 0 ; j < m ; j++){
			cin >> b[j];
			if(b[j] < min) min = b[j];
		} 
		
		cout << min*max << endl;
	}
}
