#include<bits/stdc++.h>
#define ll long long

using namespace std;

void show(ll arr[], ll n, ll m){
	for(int i = n ; i <= m ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main(){	
	ll n;
	cin >> n;
	ll arr[n], a[n*n], total = 0, dem = 0;

	for(ll i = 0 ; i < n; i++){
		cin >> arr[i];
	}
	
	for(int i = 0 ; i < n-1 ; i ++){
		int min = i;
		for(int j = i + 1 ; j < n ; j++){
			if(arr[j] < arr[min]){
				min = j;
			} 
		}
			swap(arr[i], arr[min]);
			dem++;
			for(ll l = 0 ; l < n; l++){
				a[total++] = arr[l];
			}	
	}

	while(total) {
			cout << "Buoc " << dem <<": ";
			show(a, total-n, total-1);
			dem--;
			total -= n;
	}
}
