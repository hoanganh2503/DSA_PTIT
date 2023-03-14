#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)

using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n, m ,p;
		cin >> n >> m >> p;
		int arr[n+m];
		f(i, 0, n+m-1) cin >> arr[i];
		sort(arr, arr+m+n);
		cout << arr[p-1] << endl;
	}
}

