#include<bits/stdc++.h>
using namespace std;

int m, n, arr[100];
char c;

//void show(void){
//	for(int i = 1 ; i <= n ; i++){
//		 cout << arr[i];
//	}
//	cout << endl;
//}

void show(void){
	for(int i = 1 ; i <= n ; i++){
		 if(arr[i]==2) cout << c << c << c << c << c;
		 else if(arr[i]==1) cout << "X";
		 else cout << "O";
	}
	cout << endl;
}

int check(int *arr, int n){
	int x= 0, y = 0, z = 0;
	if(arr[0] == 1) return 0;
	for(int i = 1; i <=n ; i++){
		if(arr[i] == 0) x++;
		if(arr[i] == 1) y++;
		if(arr[i] == 2) z++;
	}
	if(5*z > m) return 0;
	if(5*z + y <= x) return 0;
	if(5*z+y+x < m) return 0;
	return 1;
}

void backTrack(int i){
	for(int j = 0 ; j <= 2 ; j++){
		arr[i] = j;
		if(i==n ){
			if(check(arr, n))
				show();
		} 
		else backTrack(i+1);
	}
}

main(){
	int t;
	cin >> t;
	while(t--){
		cin >> m >> c;
		n = m-4;
	backTrack(1);	
	}

}
