#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		for(int i = 0 ; i < n ; i ++) cin >> arr[i];
		do{
			cout << "[";
			for(int i = 0 ;i < n ; i ++){
				cout << arr[i];
				if(i != n-1) cout << ' ';
			}
			cout << "]";	
			cout << endl;
			for(int i = 1 ;i < n ; i ++)
				arr[i-1] = arr[i] + arr[i-1];
			n--;
		}while(n != 0);
		cout << endl;
	}
}

