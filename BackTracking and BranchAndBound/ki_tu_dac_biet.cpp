#include<bits/stdc++.h>
#include<string>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i= a ; i <= b ; i++)

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string str;
		ll n;
		cin >> str;
		cin.ignore();
		cin >> n;
		while(str.length() < n) {
			string s = str;
			str += s[str.length()-1];
			str += s;
			str.pop_back();
			cout << str << ' ';
			
		}
		cout << str[n-1] << endl;
	}
}
