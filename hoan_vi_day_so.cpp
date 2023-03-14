#include <iostream>
#include <algorithm>
#define ll long long
using  namespace std;
 
int main()
{
	int t, n;
		cin >> n;
		int arr[n], a[n];
		for(int i = 0 ; i < n ; i++){
			arr[i] = i+1;
			cin >> a[i];	
		} 
		sort(a, a+n);
		do{
			for(int i = 0 ; i < n ; i++) 
				cout << a[arr[i]-1] << ' ';
			cout << endl;
		}while(next_permutation(arr, arr+n));
    	cout << endl;
}
