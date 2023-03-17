#include<bits/stdc++.h>
using namespace std;

int n, k, arr[1005];

void khoitao() {
	for(int i = 1 ; i <= n ; i++)
		arr[i] = i;
}

void show() {
	for(int i = 1 ; i <= k ; i++)
		cout << arr[i];
	cout << " ";
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		khoitao();
		int check = 1;
		show();
		while(check){
			int l = k;
			while(arr[l] == n-k+l) l--;
			if(l){
					arr[l] ++;
					for(int j = l + 1; j <= k; j++){
						arr[j] = arr[j-1] + 1;
					} 
					show();	
			}else{
				check = 0;
			} 
		}

	cout << endl;
	}
}
