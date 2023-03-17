#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i = a; i <=b ; i++)
using namespace std;

int binary[1000], n, inde;
map<int, string> mp2;

void show() {
	string s = "";
	for(int i = 1 ; i <= n ; i ++) 
		s += to_string(binary[i]);
	mp2[inde++] = s;
}

void Try(int i) {
	for(int j = 0 ; j <= 1 ; j++) {
		binary[i] = j;
		if(i == n) {
			show();
		}else{
			Try(i+1);
		}
	}
}

int gray(map<int, string> mp, map<int, string> mp1, int n, string str){
		mp1[0] = '0';
		mp1[1] = '1';
		int k = 1, h = 2;
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
				if(mp1[i] == str) return i;
			}	
			h = l;
			k++;	
		}
		return -1;
}

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
		mp2.clear();
		inde = 0;
		string str;
		cin >> str;
		n = str.size();
		int gr = gray(mp, mp1, n, str);
		Try(1);
		cout << mp2[gr] << endl;
	}
}
