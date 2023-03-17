#include <iostream>
#include <algorithm>
#define ll long long
using  namespace std;
 
int main()
{
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i = 0 ; i < n ; i++) arr[i] = n-i;

		do{
			for(int i = 0 ; i < n ; i++) 
				cout << arr[i];
			cout << " ";
		}while(prev_permutation(arr, arr+n));
    	cout << endl;
	}

}
