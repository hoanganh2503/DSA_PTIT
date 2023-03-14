#include<bits/stdc++.h>
using namespace std;

int n, k, arr[100];

int check(int *arr, int n, int k){
	int count = 0;
	for(int i = 1; i <= n ; i++){
		if(arr[i] == 1) count ++;
	}
	return count == k ? 1 : 0;
}

void show(void){
	for(int i = 1 ; i <= n ; i++)	
		cout << arr[i];
	cout << endl;;
}

void backTrack(int i){
	for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j;
		if(i==n ){
			if(check(arr, n, k))
				show();
		} 
		else backTrack(i+1);
	}
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> k;
	backTrack(1);	
	cout << endl;
	}

}
