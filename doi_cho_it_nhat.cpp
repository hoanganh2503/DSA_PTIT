#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin >> t;
	int n, arr[10001];
	while(t--){
		cin >> n;
		int count = 0, min = 0;;
		for(int i = 0 ; i < n ; i++) cin >> arr[i];
		for(int i = 0 ; i < n ; i++){
		 min = i;
			for(int j = i + 1 ; j < n ; j++){
				if(arr[j] < arr[min]){
				    min = j;
				} 
			}
			if(arr[i] > arr[min]){
			swap(arr[i], arr[min]);
			count++;
			}

		}
		cout << count << endl;
	}
}
