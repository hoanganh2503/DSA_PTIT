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
int n, k, sum;
int arr[1001];

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> k;
		sum = 0;
		memset(arr, 0);
		int dp[n+1][k+1], a;
		dp[0][0] = 0;
		f(i, 1, k-1) dp[0][i] = -1001;
		f(i, 1, n){
			cin >> a;
			a %= k;
			f(j, 0, k-1){
				dp[i][j] = max(dp[i-1][j], dp[i-1][(j+k-a)%k] + 1);
			}
		}		
		cout << dp[n][0] << endl;
	}
}
