#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)

using namespace std;

int main() {
	int t ;
	cin >> t;
	map<int , int> mp;
	while(t--){
		mp.clear();
		int n, m;
		cin >> n;
		int arr[n];
		f(i, 0, n-1){
			cin >> m;
			mp[m] ++;
		} 
		cout << mp[0] << endl;
	}
}
