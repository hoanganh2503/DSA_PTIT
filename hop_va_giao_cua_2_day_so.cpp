#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int n, m;
	map <int, int> mp; 
	map <int, int> mp1; 
	while(t--){
		cin >> n >> m;
		int a[n], b[m];
		mp.clear();
		mp1.clear();
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
			mp[a[i]]++;
		} 
		for(int i = 0 ; i < m ; i++){
			 cin >> b[i];
			 mp[b[i]]++;
		}
		
		for(map<int, int>::iterator it = mp.begin() ; it != mp.end() ; it++)
			cout << it->first << " ";
		cout << endl;
		for(int i = 0 ; i < n ; i ++){
			for(int j = 0 ; j < m ; j++){
				if(a[i] == b[j])
					mp1[a[i]]++;
			}
		}
		for(map<int, int>::iterator it = mp1.begin() ; it != mp1.end() ; it++)
			cout << it->first << " ";
		cout << endl;
	}
}

