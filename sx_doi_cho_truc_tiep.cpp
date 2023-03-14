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
	
	for(int i = 0 ; i < n-1 ; i ++){
		for(int j = i + 1 ; j < n ; j++){
			if(arr[i] > arr[j]) swap(arr[i], arr[j]);
		}
		cout << "Buoc " << i + 1 <<": ";
		show(arr, n);
	}
}
