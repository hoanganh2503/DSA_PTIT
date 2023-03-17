#include<bits/stdc++.h>
#define ll long long

using namespace std;

void show(ll arr[], ll n){
	for(int i = 0 ; i < n ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){	
	ll n;
	cin >> n;
	ll arr[n], a[n];

	for(ll i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	
	for(ll i = n-1 ; i >= 0 ; i --){
		for(ll k = 0 ; k <= i ; k++) a[k] = arr[k];
		sort(a, a+i+1);
		cout << "Buoc " << i <<": ";
		show(a, i+1);
	}
}
