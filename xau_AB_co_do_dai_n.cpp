#include<bits/stdc++.h>
using namespace std;

int n, arr[100];

void show(void){
	for(int i = 1 ; i <= n ; i++){
		if(arr[i] == 0) cout << 'A';
		else cout << 'B';
	}
	cout << " ";
}

void backTrack(int i){
	for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j;
		if(i==n) show();
		else backTrack(i+1);
	}
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n;
	backTrack(1);	
	cout << endl;
	}

}
