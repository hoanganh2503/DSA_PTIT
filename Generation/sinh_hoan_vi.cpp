#include<bits/stdc++.h>
using namespace std;

void khoitao(int *arr, int n){
	for(int i = 0 ; i < n ; i++)
		arr[i] = i+1;
}

void show(int *arr, int n) {
		for(int i = 0 ; i < n ; i ++) cout << arr[i] ;
	cout << " ";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n], check = 1;
		khoitao(arr, n);
		show(arr, n);
		while(check){
			int l = n-2, k = n-1;
			while(arr[l] > arr[l+1]) l--;
			while(arr[l] > arr[k]) k--;
			if(l != -1){
				swap(arr[l], arr[k]);
				int a = l+1, b = n-1;
				while(a < b) {
					swap(arr[a], arr[b]);
					a++;
					b--;
				}
				show(arr, n);	
			}else {
				check = 0;
			}
		}


		cout << endl;
	}
}
