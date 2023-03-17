#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int check = -1;
		int arr[n], a[n-1];
		f(i, 0, n-1){
			cin >> arr[i];	
			if(m >= arr[i]) check = i+1;
		} 

		cout << check << endl;
	}
}
