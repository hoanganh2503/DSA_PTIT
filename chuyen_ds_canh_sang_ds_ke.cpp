#include<bits/stdc++.h>
using namespace std;

int n;

void ma_tran_ke(int n){
	int arr[n][n];
	cout << "Nhap tu ban phim ma tran ke: " << endl;
	int count = 0;
		for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++)
			cin >> arr[i][j];
	}
	
	// Danh sach canh
	cout << "\nOut put danh sach canh: " << endl;
	for(int i = 1 ; i <= n ; i++){
		for(int j = i+1 ; j <= n ; j++)
			if(arr[i][j] == 1) {
				count ++;
			}
	}	
	cout << n << ' ' << count << endl;
	for(int i = 1 ; i <= n ; i++){
	for(int j = i+1 ; j <= n ; j++)
			if(arr[i][j] == 1) {
				cout << i << " " << j << endl;
			}
	}	
	
	// Ds ke
	count = 0;
	int a[1000];
	cout << "\nOutput danh sach ke: " << endl;
	for(int i= 1 ;i <= n ; i++){
		int k = 0;
		for(int j = 1 ; j <= n ; j++) {
			if(arr[i][j] == 1){
				count ++;
				a[k++] = j;
			}
		}
		cout << count << endl;
		for(int i = 0 ; i < k ;  i++)
			cout << a[i] << ' ';
		cout << endl;
	}	
}

void ds_ke(int n) {
	cout << "Nhap tu ban phim danh sach ke: " << endl;
	int m = 1;
	int arr[n][n] = {0}, array[n+1] = {0};
	while(m != n+1) {
		int a;
		cin >> array[m];
		for(int i = 1 ; i <= array[m] - array[m-1] ; i++){
			cin >> a;
			arr[m][a] = 1;
		}
		m++;
	}
	
	// Ma tran ke
	cout << "\nOutput ma tran ke: " << endl;
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			arr[i][j] = arr[i][j] == 1 ? 1 : 0;
			cout << arr[i][j] << ' ';		
		}
		cout << endl;
	}
	
	// Danh sach canh
	int count = 0;
	cout << "\nOutput danh sach canh: " << endl;
	for(int i = 1 ; i <= n ; i++){
		for(int j = i+1 ; j <= n ; j++)
			if(arr[i][j] == 1) {
				count ++;
			}
	}	
	cout << n << ' ' << count << endl;
	for(int i = 1 ; i <= n ; i++){
	for(int j = i+1 ; j <= n ; j++)
			if(arr[i][j] == 1) {
				cout << i << " " << j << endl;
			}
	}

}

void ds_canh(int n){
	int canh;
	int arr[n+1][n+1] = {0}, array[n+1] = {0};
	cin >> canh;
	int a, b;
	for(int i = 1 ; i <= canh ; i++) {
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	// Ma tran ke
	for(int i = 1 ; i <= n ; i++){
		for(int j = 1 ; j <= n ; j++){
			arr[i][j] = (arr[i][j] == 1) ? 1 : 0;
		}
	}
	
	// Ds ke
	int aa[1000];
	for(int i= 1 ;i <= n ; i++){
		int k = 0;
		for(int j = 1 ; j <= n ; j++) {
			if(arr[i][j] == 1){
				aa[k++] = j;
			}
		}
		cout << i << ": ";
		for(int i = 0 ; i < k ;  i++)
			cout << aa[i] << ' ';
		cout << endl;
	}
	
}

int main() {	
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
//	ma_tran_ke(n);
//	ds_ke(n);
	ds_canh(n);		
	}

}
