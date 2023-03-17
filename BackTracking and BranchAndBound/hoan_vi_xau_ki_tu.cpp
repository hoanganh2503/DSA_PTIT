#include <iostream>
#include<bits/stdc++.h>
#include <algorithm>
#define ll long long
using  namespace std;
 
int main()
{
	int t, n;
	cin >> t;
	map<char, int> mp;
	map<int, char> mp1;
	while(t--){
		cin.ignore();
		mp.clear();
		mp1.clear();
		string str;
		cin >> str;
		int arr[100000], n = 0;
		for(int i = 0 ; i <= str.length() ; i++){
			mp[str[i]] ++;
		}
		for(map<char, int>::iterator it = mp.begin() ; it != mp.end() ; it ++) {
			mp1[n++] = it->first;
		}
		n -= 1;
		for(int i = 0 ; i < n ; i++) arr[i] = i+1;

		do{
			for(int i = 0 ; i < n ; i++) 
				cout << mp1[arr[i]];
			cout << " ";
		}while(next_permutation(arr, arr+n));
    	cout << endl;
	}

}
