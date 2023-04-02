#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t = 1 ;
//	cin >> t;
	while(t--){
		int j = 1, n;
		cin >> n;
		int arr[n+1];
		f(i, 1, n) arr[i] = i;
		do{
			cout << j++ << ": ";
			f(i, 1, n) cout << arr[i] << ' ';
			cout << endl;
		}while(next_permutation(arr+1, arr+n+1));
	}
}
