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
		ll dp[n+1][m+1];
		if(n == 0 or m == 0){
			cout << 1 << endl;
			continue;
		}
		memset(dp, 0);
		f(i, 1, m) dp[1][i] = i+1;
		f(i, 1, n) dp[i][1] = i+1;
		f(i, 2, n){
			f(j, 2, m){
				dp[i][j] = dp[i-1][j] + dp[i][j-1];
			}
		}
		cout << dp[n][m] << endl;
	}
}
