#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i = a; i <=b ; i++)
using namespace std;

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
void gray(map<int, string> mp, map<int, string> mp1, int n, int var){
		mp1[0] = '0';
		mp1[1] = '1';
		int k = 1, h = 2;
		int l;
		while(k < n) {
			 l = 0;
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
		cout << mp1[var]<<endl;
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
		Try(1);
		int i;
		for(i = 0 ; i < inde ; i ++){
			if(str == mp2[i]) break;
		}
		gray(mp, mp1, n, i);
	}
}
