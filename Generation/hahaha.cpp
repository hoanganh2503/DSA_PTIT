#include<bits/stdc++.h>
using namespace std;

int n, arr[100];

void show(void){
	for(int i = 1 ; i <= n ; i++){
		if(arr[i] == 0) cout << '0';
		else cout << '1';
	}
	cout << endl;
}

int check(int *arr, int n){
	if(arr[1] != 1 || arr[n] != 0) return 0;
	for(int i = 1; i <= n - 2 ; i++){
		if(arr[i] == 1 && arr[i+1] == 1) return 0;
	}
	return 1;
}

void backTrack(int i){
	for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j;
		if(i==n ){
			if(1)
				show();
		} 
		else backTrack(i+1);
	}
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
	backTrack(1);	
	}

}
