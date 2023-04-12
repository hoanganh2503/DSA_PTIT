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
		int b, n;
		cin >> b >> n;
		int arr[n+1], dp[n+1][b+1];
		memset(dp, 0);
		f(i, 1, n) cin >> arr[i];
		f(i, 1, n){
			f(j, 1, b){
				dp[i][j] = dp[i-1][j];
				if(arr[i] < j){
					dp[i][j] = max(dp[i][j], dp[i-1][j-arr[i]]+arr[i]);
				}
			}
		}
		cout << dp[n][b] << endl;
}
