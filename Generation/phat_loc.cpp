#include<bits/stdc++.h>
using namespace std;

int n, arr[100];

void show(void){
	for(int i = 1 ; i <= n ; i++){
		if(arr[i] == 0) cout << 6;
		else cout << 8;
	}
	cout << endl;
}

int check(int *arr, int n){
	if(arr[1] != 1 || arr[n] != 0) return 0;
	for(int i = 1; i <= n - 2; i++){
		if(arr[i] == 1 && arr[i+1] == 1) return 0;
		if(i <= n-3){
			if(arr[i] == 0 && arr[i+1] == 0 && arr[i+2] == 0 && arr[i+3] == 0) return 0;
		}
	}
	return 1;
}

void backTrack(int i){
	for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j;
		if(i==n ){
			if(check(arr, n))
				show();
		} 
		else backTrack(i+1);
	}
}

main(){
	cin >> n;
	if(n>=6)
	backTrack(1);		
}
