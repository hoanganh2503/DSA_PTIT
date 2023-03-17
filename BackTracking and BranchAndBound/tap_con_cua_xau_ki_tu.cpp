#include<bits/stdc++.h>
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
	vector<vector<int> > vt;
	while(t--) {
		cin.ignore();
		ok = 1;
		vt.clear();
		int n, k;
		cin >> n;
		int arr[n+1], b[n+1];
		cin.ignore();
		string str;
		cin >> str;
		for(int i = 0; i < n ; i++){
			arr[i+1] = (int)str[i] - 96;
			b[i] = 0;
		}
		// for(int i = 0; i < str.length() ; i++) cout << arr[i] << ' ';
		while(ok) {
			int sum = 0;
			sinh(b, n);
			for(int i = 1; i <= n ; i ++) {
				if(b[i] == 1) sum += arr[i];
			}
			if(1) {
				vector<int> vec;
				for(int i = 1 ; i <= n ; i++) {
					if(b[i] == 1)vec.push_back(arr[i]);
				}
				sort(begin(vec), end(vec));
				vt.push_back(vec);
			}
		}
		sort(vt.begin(), vt.end());
		
		for (auto vec : vt) {
	    for (auto x : vec) {
	        	cout << char(x+96);
	    	}
    		cout << ' ';
		}
		
		cout << endl;		
	}

}

