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
	int t ;
	cin >> t;
	while(t--){
		int n, V;
		cin >> n >> V;
		int w[n+1], v[n+1];
		f(i, 1, n) cin >> w[i];
		f(i, 1, n) cin >> v[i];
		int dp[n+1][V+1];
		memset(dp, 0);
		f(i, 1, n){
			f(j, 1, V){
				dp[i][j] =dp[i-1][j];
				if(j >= w[i]){
					dp[i][j] = max(dp[i-1][j], v[i] + dp[i-1][j-w[i]]);
				}
			}
		}	
		cout << dp[n][V] << endl;
	}
}
