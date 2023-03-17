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
	ll arr[n];

	for(ll i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0 ; i < n ; i ++){
		sort(arr, arr+i+1);
		cout << "Buoc " << i <<": ";
		show(arr, i+1);
	}
}
