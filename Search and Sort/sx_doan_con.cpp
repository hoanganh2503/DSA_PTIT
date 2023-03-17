#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	ll n;
	while(t--){
		cin >> n;
		ll arr[n], a[n];
		for(ll i = 0 ; i < n ; i++)
			 cin >> arr[i];

		ll max_arr = -1e9, count = 0;
		for(ll i = 0 ; i < n-1 ; i++){
			max_arr = max(max_arr, arr[i]);
			ll min_arr = *min_element(arr+i+1,arr+n);
			if(max_arr < min_arr)
			for(ll j = i+1; j < n ; j++){
				if(arr[j] == min_arr){
					count ++;
					a[count++] = j+1;
					i = j+1;
				}
			}

		}
		cout << count << endl;
		for(ll i = 0 ; i <count ; i++) cout << a[i] << " ";
		cout << endl;
	}
}

