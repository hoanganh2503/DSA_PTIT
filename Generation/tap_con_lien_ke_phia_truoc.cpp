#include<bits/stdc++.h>
using namespace std;

int n, k, arr[1005];

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		int l = k;
		for(int i = 1 ; i <= k ; i++) cin >> arr[i];
		while(arr[l-1] + 1 == arr[l] && l) l--;
		if(l) {
			arr[l] --;
			for(int i = l+1 ; i <=k ; i++) arr[i] = n-k+i;
			for(int i = 1 ; i <=k ; i++) cout << arr[i] << ' ';
		}else
			for(int i = n-k+1 ; i <= n ; i++) cout << i << ' ';

	cout << endl;
	}
}

