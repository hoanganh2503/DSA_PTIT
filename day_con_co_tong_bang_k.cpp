#include<bits/stdc++.h>
#include<vector>
using namespace std;
int ok = 1;
void sinh(int *b, int n){
	int i = n;
	while(i > 0 && b[i] == 1) {
		b[i] = 0;
		i--;
	}
	if(i == 0) ok = 0;
	else b[i] = 1;
}

int main() {
	int t;
	cin >> t;
	vector<vector<int> > a;
	while(t--) {
		a.clear();
		ok = 1;
		int n, k;
		cin >> n >> k;
		int arr[n+1], b[n+1];
		for(int i = 1; i <= n ; i++){
			cin >> arr[i];
			b[i] = 0;
		}
		sort(arr+1, arr+n+1);
		int l = 0;
		while(ok) {
			int sum = 0;
			sinh(b, n);int m = 0;
			for(int i = 1; i <= n ; i ++) {
				if(b[i] == 1){
					sum += arr[i];
					m++;
				} 
			}
			if(sum == k) {
				vector<int > x;
				for(int i = 1 ; i <= n ; i++) {
					if(b[i] == 1){
					x.push_back(arr[i]);	
					}
				}
				a.push_back(x);
				l++;
			}
		}

		int dong = a.size();
		if(dong){
		for(int i = dong-1 ; i >= 0 ; i--){
			if(a[i].size())
			cout <<"[";
			int cot = a[i].size();
			for(int j = 0 ; j < cot ; j++) {		
					cout << a[i][j];
					if(j != cot-1) cout << ' ';	
			}
			if(a[i].size()){
			cout << "]";
			cout << ' ';
			}

		}	
	}
	else cout << -1;
		cout <<endl;	
	}

 }
