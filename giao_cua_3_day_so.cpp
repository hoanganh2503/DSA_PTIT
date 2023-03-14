#include<bits/stdc++.h>
#define ll long long

using namespace std;

int findCommon(ll ar1[], ll ar2[], ll ar3[], ll n1, ll n2, ll n3){
	int check = 0;
	int i = 0, j = 0 , k = 0;
	while(i < n1  && j < n2 && k < n3){
		if(ar1[i] == ar2[j] && ar2[j] == ar3[k]) {
			cout << ar1[i] << " ";	
			check = 1;
			i++;
			j++;
			k++;
		}
		else if(ar1[i] < ar2[j]) i++;
		else if(ar2[j] < ar3[k]) j++;
		else k++;
		
	}
	return check;
}

int main(){	
	int t;
	cin >> t;
	ll n, m, p;
	while(t--) {
		cin >> n >> m >> p;
		ll a[n] = {0}, b[m] = {0}, c[p] ={0}, d[n] = {0}, l = 0;	
		for(ll i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		for(ll i = 0 ; i < m ; i++){
			cin >> b[i];
		}
		for(ll i = 0 ; i < p ; i++){
			cin >> c[i];
		}
		int k = findCommon(a, b, c, n, m, p);
		if(k == 0) cout << -1 << endl;
		cout << endl;
	}
}
