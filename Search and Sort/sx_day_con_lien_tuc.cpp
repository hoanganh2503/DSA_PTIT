#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int arr[n], ax[n];
		int  a = 0, b = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
			ax[i] = arr[i];
		} 
		sort(arr, arr+n);
		for(int i = 0 ; i < n ; i++){
			if(arr[i] != ax[i]){
				a = i;
				break;
			}
		}
		for(int i = n-1 ; i >= 0 ; i--){
			if(arr[i] != ax[i]){
				b = i;
				break;
			}
		}
		cout << a+1 << " " << b+1 << endl;
	}
}
