#include<bits/stdc++.h>
using namespace std;
int ok = 1;

int snt(int n) {
	if(n < 2) return 0;
	if(n == 2) return 1;
	if(n % 2 == 0) return 0;
	for(int i = 3 ; i <=sqrt(n) ; i++){
		if(n%i == 0) return 0;
	}
	return 1;
}

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
	vector<vector<int> > vt;
	while(t--) {
		ok = 1;
		vt.clear();
		int n, k;
		cin >> n;
		int arr[n+1], b[n+1];
		for(int i = 1; i <= n ; i++){
			cin >> arr[i];
			b[i] = 0;
		}
		while(ok) {
			int sum = 0;
			sinh(b, n);
			for(int i = 1; i <= n ; i ++) {
				if(b[i] == 1) sum += arr[i];
			}
			if(snt(sum)) {
				vector<int> vec;
				for(int i = 1 ; i <= n ; i++) {
					if(b[i] == 1)vec.push_back(arr[i]);
				}
				sort(begin(vec), end(vec), greater<int>());
				vt.push_back(vec);
			}
		}
		sort(vt.begin(), vt.end());
		
		for (auto vec : vt) {
	    for (auto x : vec) {
	        	cout << x << " ";
	    	}
    		cout << endl;
		}
		
		cout << endl;		
	}

}

