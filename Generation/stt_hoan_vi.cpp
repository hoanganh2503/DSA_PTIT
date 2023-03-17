#include <iostream>
#include <algorithm>
#define ll long long
using  namespace std;

int check(int *arr, int *b, int n){
	for(int i = 0 ; i < n ; i ++){
		if(arr[i] != b[i]) return 0;
	}
	return 1;
}
 
int main()
{
	int t, n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n], b[n], count = 0;
		for(int i = 0 ; i < n ; i++) b[i] = i + 1;
		for(int i = 0 ; i < n ; i++) cin >> arr[i];

		do{
			if(check(arr, b, n)) break;
			else count ++;
		}while(next_permutation(b, b+n));
    	cout << count +1<< endl;
	}

}
