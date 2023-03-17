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
		int check = 0;
		int arr[n], a[n-1];
		f(i, 0, n-1) cin >> arr[i];
		f(i, 0, n-2){
			cin >> a[i];
			if(a[i] != arr[i] && a[i-1] == arr[i-1]){
				check = i+1;
			}
		}
		cout << check << endl;
	}
}
