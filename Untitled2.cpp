#include<bits/stdc++.h>
#define ll long long

using namespace std;

int n, arr[100];

void show() {
	for(int i = 1 ; i <= n ; i++)
		if(arr[i] == 0) cout << 6;
		else cout << 8;
	cout << " ";
}

int check1(int *arr, int n) {
	for(int i = 1 ; i <= n/2 ; i++){
		if(arr[i] != arr[n-i+1]) return 0;;
	}
	return 1;
}

void Try(int i){
	for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j;
		if(i == n) {
			if(check1(arr, n)){
			show();
			}
		}else Try(i+1);
	}
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
		Try(1);
		cout << endl;
	}
}
