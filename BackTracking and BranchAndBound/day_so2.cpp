#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n], a[100000] = {0}, k = 0;
		for(int i = 0 ; i < n ; i ++){
			 cin >> arr[i];	
			 a[k++] = arr[i];
		}
		do{
			for(int i = 1 ;i < n ; i ++){
				arr[i-1] = arr[i] + arr[i-1];
				a[k++] = arr[i-1];				
			}
			n--;
		}while(n != 0);
		int m = 1;
		do{
			cout << "[";
			for(int i = k-m ;i < k  ; i++){
				cout << a[i];
				if(i != k-1) cout << ' ';
			}
			cout << "] ";	
			m++;
			k = k-m+1;
		}while(k != 0);
		cout << endl;
	}
}
