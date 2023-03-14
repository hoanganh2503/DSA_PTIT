#include<bits/stdc++.h>
using namespace std;

int n, arr[100];

void show(void){
	for(int i = 1 ; i <= n ; i++)
		cout << arr[i] << " ";;
	cout << endl;
}

int check(int arr[], int n){
	for(int i = 1 ; i <= n/2 ;i++)
		if(arr[i] != arr[n-i+1])
		return 0;
	return 1;
}

void backTrack(int i){
	for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j;
		if(i==n){
			if(check(arr, n)) show();
		} 
		else backTrack(i+1);
	}
}

main(){
	cin >> n;
	backTrack(1);
}
