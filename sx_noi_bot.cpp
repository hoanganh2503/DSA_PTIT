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
		int check = 0;
		for(int j = 0 ; j < n-i-1 ; j++){
			if(arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				check = 1;
			} 
		}
		if(check == 0) break;
		cout << "Buoc " << i + 1 <<": ";
		show(arr, n);
	}
}
