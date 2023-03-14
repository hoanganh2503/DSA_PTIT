#include<bits/stdc++.h>
#include<vector>
#define ll long long

using namespace std;

int main() {
	int t ;
	cin >> t;
	map<int, int> mp;
	while(t--){
		mp.clear();
		int n, m, k;
		cin >> n >> m;
		for(int i = 0; i < n ; i++) {
			cin >> k;
			mp[k] = i;
		}
		if(mp[m]) cout << mp[m] + 1	 << endl;
		else cout << "NO" << endl;
	}
}
