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
		int n, x, y, z;
		cin >> n >> x >> y >> z;
		int dp[n+1];
		dp[0] = 0, dp[1] = x;
		f(i, 2, n){
			if(i % 2 == 0) dp[i] = min(dp[i-1] + x, dp[i/2] + z);
			else dp[i] = min({dp[i-1] + x, dp[(i+1)/2] + z + y, dp[(i-1)/2] + x + z});
		}
		cout << dp[n] << endl;
	}
}
