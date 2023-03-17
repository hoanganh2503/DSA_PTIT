#include<bits/stdc++.h>
#include<string>
using namespace std;

int main() {
	int n, k;
	map<int, int> mp;
	map<int, int> mp1;
	cin >> n >> k;
	int str;
	int arr[n];
	for(int i = 1 ; i <= n ; i++){
		cin >> str;
		mp[str] ++;
	}
	int q = 0;
	for(map<int, int>::iterator it = mp.begin() ; it != mp.end() ; it ++) {
		mp1[q++] = it->first;
	}
	for(int i = 1 ; i <= q ; i++) arr[i] = i;
	for(int i = 1 ; i <= k ; i++)
	cout << mp1[arr[i]-1] << " ";
	cout << endl;
		int check1 = 1;
		while(check1){
			int l = k;
			while(arr[l] == q-k+l) l--;
			if(l){
				arr[l] ++;
				for(int j = l + 1; j <= k; j++){
					arr[j] = arr[j-1] + 1;
				}
				
				for(int i = 1 ; i <= k ; i++)
					cout << mp1[arr[i]-1] << " ";
				cout << endl;
			}else check1 = 0;
		}

}

