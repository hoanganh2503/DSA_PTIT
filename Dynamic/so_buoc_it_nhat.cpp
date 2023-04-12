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
	int t ;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int arr[n], a[n], ans = 0;
		memset(arr, 0);
		memset(a, 0);
		F(i, 0, n) cin >> arr[i];
		F(i, 0, n){
			F(j, 0, i){
				if(arr[i] >= arr[j]) a[i] = max(a[j]+1, a[i]);
			}
			ans = max(a[i], ans);
		}
		cout << n - ans - 1 << endl;
	}
}
