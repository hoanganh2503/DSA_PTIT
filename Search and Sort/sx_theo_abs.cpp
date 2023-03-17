#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, j=0, count =0;
		cin >> n >> m;
		int arr[n] = {0}, a[n] = {0};
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
			a[j++] = abs(m-arr[i]);
		}
		int k = sizeof(a)/sizeof(int);
	sort(a, a+k);

		for(int i = 0 ; count < n ; i++){
			for(int k = 0 ; k < n ; k++) {
				if(a[i] == abs(m-arr[k]) && a[i] !=a[i+1]) {
					cout << arr[k] << " ";
					count++;
				}
			}
		}

		cout << endl;
	}
}
