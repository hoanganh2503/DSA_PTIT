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
		int n, m ;
		cin >> n >> m;
		int arr[n+1][m+1], dp[n+1][m+1];
		f(i, 1, n){
			f(j, 1, m) cin >> arr[i][j];
		}
		f(i, 0, n) arr[i][0] = dp[i][0] = arr[i][1];
		f(i, 0, m) arr[0][i] = dp[0][i] = arr[1][i];
		
		f(i, 1, n){
			f(j, 1, m){
				if(i == 1 and j == 1) dp[i][j] = arr[i][j];
				else{
					if(i == 1) dp[i][j] = dp[i][j-1] + arr[i][j];
					else if(j == 1) dp[i][j] = dp[i-1][j] + arr[i][j];
					else dp[i][j] = min({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) + arr[i][j];
				}
			}
		}
		cout << dp[n][m] << endl;
	}
}
