#include<bits/stdc++.h>
#define ll long long
#include <cstring>

using namespace std;

int main(){	
	int t;
	cin >> t;
	int n, k;
	while(t--){
		cin >> n >> k;
		int arr[n];
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		sort(arr, arr+n);
		for(int i = n-1 ; i > n-k-1 ; i --) {
			cout << arr[i] << " ";
		}
		cout  << endl;
	}
}
