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
const ll mod = 1e9 + 7;

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		int n, k;
		cin >> n >> k;
		ll dp[k+1][n+1];
		if(k > n) {
			cout << 0 << endl;
			continue;
		}
		f(i, 0, n) dp[1][i] = i;
		f(i, 2, k){
			f(j, i, n){
				dp[i][j] = (dp[i-1][j-1] * j) % mod;
			}
		}
		cout << dp[k][n] << endl;
	}
}
