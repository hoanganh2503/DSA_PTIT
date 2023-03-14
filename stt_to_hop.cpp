#include<bits/stdc++.h>
using namespace std;

int n, k;

void khoitao(int *arr, int n) {
	for(int i = 1 ; i <= n ; i++)
		arr[i] = i;
}

int check(int *arr, int *b, int n){
	for(int i = 1 ; i <= n ; i ++){
		if(arr[i] != b[i]) return 0;
	}
	return 1;
}

void show(int *arr, int n) {
	for(int i = 1 ; i <= n ; i++)
		cout << arr[i] ;
	cout << " ";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int arr[n], b[n], count = 1;
		khoitao(arr, n);
		for(int i = 1; i <= k ; i ++) cin >> b[i];
		int check1 = 1;
		while(check1){
			int l = k;
			while(arr[l] == n-k+l) l--;
			if(l){
					arr[l] ++;
					for(int j = l + 1; j <= k; j++){
						arr[j] = arr[j-1] + 1;
					}
					if(check(arr, b, k)){
						check1 = 0;						
					} 
					else count ++;
			}
		}

	cout << count+1 << endl;
	}
}
