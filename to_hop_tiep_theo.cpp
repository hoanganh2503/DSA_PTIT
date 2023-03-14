#include<bits/stdc++.h>
using namespace std;

int n, k, arr[1005];

void khoitao() {
	for(int i = 1 ; i <= n ; i++)
		arr[i] = i;
}

void show() {
	for(int i = 1 ; i <= k ; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	map<int, int> mp;
	while(t--) {
		mp.clear();
		int count = 0;
		cin >> n >> k;
		for(int i = 1 ; i <= k ; i++){
			 cin >> arr[i];
			 mp[arr[i]]++;
		}
		int l = k;
		while(arr[l] == n-k+l) l--;
		if(l){
				arr[l] ++;
				if(mp[arr[l]] == 0) count ++;
				for(int j = l + 1; j <= k; j++){
					arr[j] = arr[j-1] + 1;
					if(mp[arr[j]] == 0) count ++;
				} 
		}else{
		count = k;
		} 
		cout << count << endl;
	}
}
