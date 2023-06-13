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
		int arr[n+1], dp[n+1];
		f(i, 1, n) cin >> arr[i];
		dp[0] = 0;
		dp[1] = arr[1];
		dp[2] = arr[2];
		f(i, 2, n){
			dp[i] = max(arr[i]+dp[i-2], dp[i-1]);
		}
		cout << dp[n] << endl;
	}
}
