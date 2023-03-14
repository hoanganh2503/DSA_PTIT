#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t ;
	cin >> t;
	vector<int> vt;
	while(t--){
		vt.clear();
		int n;
		cin >> n;
		int arr[n];
		f(i, 0, n-1){
			cin >> arr[i];
			vt.push_back(arr[i]);
		} 
		sort(all(vt));
		int check = 1;
		for(int i = 0 ; i <= n/2 && check ; i++) {
			int c1 = 1, c2 = 1;
			if((arr[i] != vt[i] || arr[n-i-1] != vt[n-i-1])) {
				c1 = 0;
			}
			if((arr[i] != vt[n-i-1] || arr[n-i-1] != vt[i])) {
				c2 = 0;
			}	
			if(c1 == 0 && c2 == 0) check = 0;
		}
		if(check ) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
