#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
#define sz size()
#define pb(x) push_back(x)

using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		int n, m, d = 0;
		cin >> n >> m;
		int arr[n+1];
		f(i, 0, n-1) arr[i] = i+1;
		do{
			d++;
			if(d%m == 0){
				f(i, 0, n-1) cout << arr[i] << ' ';
				cout << endl;				
			}
		}while(next_permutation(arr, arr+n));
	}
}
