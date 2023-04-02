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
	int n, s;
	cin >> n >> s;
	int w[n+1], v[n+1];
	f(i, 1, n){
		cin >> w[i];
		cin >> v[i];
	}
	int dp[n+1][s+1];
	memset(dp, 0);
	f(i, 1, n){
		f(j, 1, s){
			dp[i][j] = dp[i-1][j];
			if( j >= w[i]) dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
		}
	}
	cout << dp[n][s];
}
