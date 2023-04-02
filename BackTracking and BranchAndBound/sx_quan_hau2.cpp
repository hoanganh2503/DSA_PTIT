#include<bits/stdc++.h>
using namespace std;

int n = 8, arr[100], a[9][9], sum = 0;
int cot[101], d1[101], d2[101];

void handle(int i) {
	for(int j = 1 ; j <= n ; j++) {
		if(cot[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1) {
			arr[i] = j;
			cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
			if(i == n) {
				int tong = 0;
				for(int l = 1 ; l <= n ; l++){
					tong += a[l][arr[l]]; 
				}
				sum = max(sum, tong);
			}
			else handle(i+1);
			cot[j] = d1[i-j+n] = d2[i+j-1] = 1;

		}
	}
}

int main() {
	int t;
	cin >> t;
	int z = 1;
	while(t--) {
		for(int i = 1 ; i <= 100 ; i ++)
			cot[i] = d1[i] = d2[i] = 1;	
		for(int i = 1 ; i <= 8 ; i++){
			for(int j = 1 ; j <= 8 ; j++)
			cin >> a[i][j];
		}	
		handle(1);
		cout << "Test " << z++ << ": ";
		cout << sum << endl;
	}
}
