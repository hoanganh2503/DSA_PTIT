#include<bits/stdc++.h>
using namespace std;
int ok = 1;
void sinh(int *b, int n){
	int i = n;
	while(i > 0 && b[i] == 1) {
		b[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else b[i] = 1;
}

int main() {
	int n, k;
	cin >> n >> k;
	int arr[n+1], b[n+1];
	for(int i = 1; i <= n ; i++){
		cin >> arr[i];
		b[i] = 0;
	}
	int cnt = 0;
	while(ok) {
		int sum = 0;
		sinh(b, n);
		for(int i = 1; i <= n ; i ++) {
			if(b[i] == 1) sum += arr[i];
		}
		if(sum == k) {
			for(int i = 1 ; i <= n ; i++) {
				if(b[i] == 1) cout << arr[i] << " ";
				
			}cout<< endl;
			cnt++;
		}
	}
	cout << cnt;
}
