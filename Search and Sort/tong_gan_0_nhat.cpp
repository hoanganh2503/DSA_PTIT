#include<bits/stdc++.h>
#define ll long long
#include <cstring>

using namespace std;

int main(){
	int t;
	cin >> t;
	int n, k;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i];
		}
		int min = 9999999;
		for(int i = 0 ; i < n-1 ; i ++){
			for(int j = i + 1 ; j < n  ; j++) {
				if(abs(arr[i] + arr[j]) < abs(min)) 
					min = arr[i] + arr[j];
			}
		}
		cout  << min << endl;
	}
}
