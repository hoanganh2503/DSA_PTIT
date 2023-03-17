#include<bits/stdc++.h>
#define ll long long
#include <cstring>

using namespace std;

int main(){	
	int t;
	cin >> t;
	int n, k;
	while(t--){
		cin >> n >> k;
		int arr[n];
		int count = 0;
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
			if(arr[i] == k) count ++;
		}
		if(count) cout << count << endl;
		else cout  << -1 << endl;
	}
}
