#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t ;
	cin >> t;
	map<char, int> mp;
	while(t--){
		cin.ignore();
		mp.clear();
		int n;
		cin >> n;
		cin.ignore();
		string str;
		cin >> str;
		f(i, 0, str.size()-1){
			mp[str[i]] ++;
		}
		ll d = 0;
		for(map<char, int>::iterator it = mp.begin(); it != mp.end() ; it++) {
			d = it -> second;
			break;
		}
		if(str.size() >= d*n -n +1) cout << 1 << endl;
		else cout << -1 << endl;
	}
}	
