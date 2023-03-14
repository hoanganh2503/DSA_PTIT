#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--) {
		string str;
		cin >> str;
		int j;
		int n = str.size();
		for(j = n-1 ; j >= 0 ; j--){
			if(str[j] == 48) break;
		}
		for(int i = 0 ; i < j ; i ++) cout << str[i];
		for(int i = j ; i < n ; i++){
			if(str[i] == 48) cout << 1;
			else cout << 0;
		}
		cout << endl;
	}
}
