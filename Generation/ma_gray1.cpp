#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i = a; i <=b ; i++)
using namespace std;

int main(){
	int t;
	cin >> t;
	vector<vector<string> > vt;
	map<int, string> mp;
	map<int, string> mp1;
	while(t--){
		vt.clear();
		mp.clear();
		mp1.clear();
		mp1[0] = '0';
		mp1[1] = '1';
		int n, k = 1, h = 2;
		cin >> n;
		while(k < n) {
			int l = 0;
			for(int i = 0 ; i < h ; i++) {
				string s = '0' + mp1[i];
				mp[l++] = s;
			}
			for(int i = h-1 ; i >= 0 ; i--) {
				string s = '1' + mp1[i];
				mp[l++] = s;
			}	
			for(int i = 0 ; i < l ; i++) {
				mp1[i] = mp[i];
			}	
			h = l;
			k++;	
		}
		for(int i = 0 ; i < h ; i++) {
			cout << mp[i] << " ";
		}

		cout << endl;
	}
}
