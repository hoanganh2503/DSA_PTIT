#include<bits/stdc++.h>
using namespace std;

int n, k;

void khoitao(int *arr, int n) {
	for(int i = 1 ; i <= n ; i++)
		arr[i] = i;
}

void show(int *arr, int n) {
	for(int i = 1 ; i <= n ; i++)
		printf("%c", arr[i] + 64) ;
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int arr[n];
		khoitao(arr, n);
		int check1 = 1;
		show(arr, k);
		while(check1){
			int l = k;
			while(arr[l] == n-k+l) l--;
			if(l){
					arr[l] ++;
					for(int j = l + 1; j <= k; j++){
						arr[j] = arr[j-1] + 1;
					}
					show(arr, k);
			}else check1 = 0;
		}
	}
}
