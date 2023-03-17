#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	ll n;
	cin >> n;
	ll arr[n];
	for(ll i = 0 ; i < n ; i++) {
		cin >> arr[i];
	}
	for(ll i = 0 ; i < n ; i++){
		int check = 1;
		for(int j = 0 ; j < i ; j++){
			if(arr[i] == arr[j]) check = 0;
		}
		if(check) cout << arr[i]<< " ";
	}

}
