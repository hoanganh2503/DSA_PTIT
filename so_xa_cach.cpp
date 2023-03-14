#include<bits/stdc++.h>
using namespace std;

int check1(int *arr, int n) {
	for(int i = 0 ; i < n - 1 ; i++) {
		if(abs(arr[i] - arr[i+1]) == 1)
		return 0;
	}
	return 1;
}


int main()
{
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i = 0 ; i < n ; i++) arr[i] = i+1;
		do{
			if(check1(arr, n)){
			for(int i = 0 ; i < n ; i++) 
				cout << arr[i];
			cout << endl;				
			}

		}while(next_permutation(arr, arr+n));
    	cout << endl;
	}

}

