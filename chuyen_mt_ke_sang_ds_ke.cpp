#include<bits/stdc++.h>
using namespace std;

int n, m, a, b;

int main() {	
		cin >> n ;
		vector<set<int>> vt(n+1);
		for(int i = 1; i <= n ; i++){
			for(int j = 1; j <= n ; j ++){
				cin >> a;
				if(a){
					vt[i].insert(j);
				}
			}
		}
		for(int i = 1; i <= n ; i++){
			for(auto j:vt[i]){
				cout << j << " ";
			}
			cout << endl;
		}
}
