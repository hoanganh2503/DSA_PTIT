#include<bits/stdc++.h>
using namespace std;

void show(int *arr, int k) {
	for(int i = 1 ; i <= k ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0 ; i < n ;i++) 
			cin >> arr[i];
		int l = n-2, k = n-1;
		while(arr[l] > arr[l+1]) l--;
		while(arr[l] > arr[k]) k--;
		if(l != -1){
			swap(arr[l], arr[k]);
			for(int i = 0 ; i <= l ; i ++) cout << arr[i] << " ";
			for(int j = n-1 ; j > l ; j--) cout << arr[j] << " ";
		}else {
			for(int i = 1 ; i <= n ; i ++) cout << i << " ";
		}

		cout << endl;
	}
}

