#include<bits/stdc++.h>
using namespace std;

int n, dem = 0, arr[100];
int cot[101], d1[101], d2[101];

void handle(int i) {
	for(int j = 1 ; j <= n ; j++) {
		if(cot[j] == 1 && d1[i-j+n] == 1 && d2[i+j-1] == 1) {
			arr[i] = j;
			cot[j] = d1[i-j+n] = d2[i+j-1] = 0;
			
			if(i == n) dem++;
			else handle(i+1);
			cot[j] = d1[i-j+n] = d2[i+j-1] = 1;

		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		dem = 0;
		for(int i = 1 ; i <= 100 ; i ++)
			cot[i] = d1[i] = d2[i] = 1;	
		cin >> n;	
		handle(1);
		cout << dem << endl;
	}
}
