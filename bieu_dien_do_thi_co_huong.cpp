#include<bits/stdc++.h>
using namespace std;

int n, m, a, b;

int main() {	
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m;
		vector<set<int>> vt(n+1);
		for(int i = 1; i <= m ; i++){
			cin >> a >> b;
			vt[a].insert(b);
		}
		for(int i = 1; i <= n ; i++){
			cout << i << ": ";
			for(auto j:vt[i]){
				cout << j << " ";
			}
			cout << endl;
		}

	}

}
