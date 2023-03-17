#include<bits/stdc++.h>
#define f(i, a, b) for(int i = a ; i <= b ; i++)
using namespace std;

// quy uoc: 0:k ki tu a
//			1:a; 2:b

int n, m,  k, dem = 0;
int arr[1005];
map<string, int> mp;

int check(){
	int arr0 = 0, arr1 = 0, arr2 = 0, count = 0;
	for(int i = 1 ; i <= k ; i++){
		if(arr[i] == 0){
			arr0 = 1;
			count ++;
		} 
		if(arr[i] == 2) arr2 = 1;
		if(arr[i] == 0 && arr[i+1] == 0) return 0;
		if(arr[i] == 0 && (arr[i-1] == 1 || arr[i+1] == 1)) return 0;
	}
	if(!arr2 || !arr0) return 0;
	if(count*m >= n) return 0;
	if(count*m + k - m  >= n) return 0;

	return 1;
}

void show(){
	string s = "";
	for(int l = 1 ; l <= k ; l++){
		if(arr[l] == 0) {
			for(int i = 0 ; i < m ; i++) s += "A";
		}
		if(arr[l] == 1) s +=  "A";
		if(arr[l] == 2) s +=  "B";
	}
	mp[s] = 1;
}

void Try(int i) {
	for(char j = 0 ; j <= 2 ; j++) {
		arr[i] = j;
		if(i == k ){
			if(check()){
				dem++;				
				show();
			}

		}else Try(i+1);
	}
}

int main() {
		cin >> n >> m;
		k = n-m+1;
		for(int i = 0 ; i <= k+1 ; i++) arr[i] = 10;
		Try(1);
		cout << mp.size() << endl;
		for(map<string, int>::iterator it = mp.begin() ; it!=mp.end(); it++) cout << it->first<<endl;
}

