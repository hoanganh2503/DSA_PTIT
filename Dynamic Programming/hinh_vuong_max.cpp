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
	cin >> t;
	while(t--){
		int n, m;
		cin >> n >> m;
		int arr[n+1][m+1], dp[n+1][n+1];
		memset(arr, 0);
		memset(dp, 0);
		f(i, 1, n){
			f(j, 1, m) cin >> arr[i][j];
		}
		int ans = 0;
		f(i, 1, n){
			f(j, 1, m){
				if(!arr[i][j]) dp[i][j] = 0;
				else{
					dp[i][j] = 1;
					if(arr[i-1][j-1] and arr[i][j-1] and arr[i-1][j])
						dp[i][j] = min(dp[i-1][j-1], min(dp[i][j-1] , dp[i-1][j])) + 1;
					ans = max(ans, dp[i][j]);
				}
			}
		}
		cout << ans << endl;
	}
}
