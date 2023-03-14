#include<bits/stdc++.h>
#include<vector>
#define ll long long

using namespace std;

int main() {
	string a, b;
	string c, d, e, f;
	cin >> a >> b;
	for(int i = 0 ; i < a.length() ; i++){
		if(a[i] == '6') a[i] = '5';
	}
	for(int i = 0 ; i < b.length() ; i++){
		if(b[i] == '6') b[i] = '5';
	}
	c=a;
	d=b;
	cout << stoi(c) + stoi(d) << ' ';
		for(int i = 0 ; i < a.length() ; i++){
		if(a[i] == '5') a[i] = '6';
	}
	for(int i = 0 ; i < b.length() ; i++){
		if(b[i] == '5') b[i] = '6';
	}
	c=a;
	d=b;
	cout << stoi(c) + stoi(d);
	
}
