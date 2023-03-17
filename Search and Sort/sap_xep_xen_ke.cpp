#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		int arr[n];
		for(int i = 0 ; i < n ; i++)
			cin >> arr[i];
		sort(arr, arr+n);
		int k = n-1, l=0;
		for(int i = 0 ; count < n ; i++){
			if(i%2==0) cout << arr[k--] << " ";
			else cout << arr[l++]<<" ";
			count++;
		}

			
		cout << endl;
	}
}
