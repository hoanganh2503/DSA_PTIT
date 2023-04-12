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
		int arr[n+1], dp[n+1], ans = 0;
		f(i, 1, n) cin >> arr[i];
		f(i, 1, n){
			dp[i] = arr[i];
			F(j, 1, i){
				if(arr[i] > arr[j]) dp[i] = max(dp[i], dp[j]+arr[i]);	
			}
			ans = max(ans, dp[i]);
		}
		cout << ans << endl;
	}
}
