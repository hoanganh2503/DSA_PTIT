#include<bits/stdc++.h>
#define ll long long
#include <cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	int n;
	cin.ignore();
	string str;
	map<char, int> mp;
	while(t--){
		mp.clear();
		cin >> n;
		cin.ignore();
		getline(cin, str);
		int length = str.length();
		for(int i = 0 ; i < length ;  i++) {
			if(str[i] != ' ')
			mp[str[i]] ++;
		}
		for(map<char, int>::iterator it = mp.begin(); it != mp.end() ; it++){
			cout << it -> first << " ";
		}
		cout  << endl;
	}
}
