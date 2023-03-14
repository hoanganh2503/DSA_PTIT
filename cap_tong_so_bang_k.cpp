#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int t;
	cin >> t;
	int n, m;
	while(t--){
		cin >> n >> m;
		int count = 0;
		ll arr[n];

		for(int i = 0 ; i < n ; i++) cin >> arr[i];
		for(int i = 0 ; i < n-1  ;  i++) {
			for(int j = i+1 ; j < n ; j++){
				if(arr[i] + arr[j] == m) count ++;
			}
		}
		cout << count << endl;
	}
}
