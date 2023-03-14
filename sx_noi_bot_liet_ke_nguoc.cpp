#include<bits/stdc++.h>
#define ll long long

using namespace std;

void show(ll arr[], ll n, ll m){
	for(int i = n ; i <= m ; i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main(){	
	int t;
	cin >> t;
	ll n;
	while(t--){
		cin >> n;
		ll arr[n], a[n*n], total = 0, dem = 0;
	
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

}
