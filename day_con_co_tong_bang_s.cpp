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
		int l = 0, che = 1;
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
				che = 0;
				ok = 0;
			}
		}

		if(!che) cout << "YES"<<endl;
		else cout << "NO" << endl;
	}

 }
