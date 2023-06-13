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
	int mod = 1e9 + 7;
	int dp[101][50005] = {};
	f(i, 1, 9) dp[1][i] = 1;
	f(i, 1, 100){
		f(j, 0, 9){
			f(z, j, 50000){
				dp[i][z] += dp[i-1][z-j];
				dp[i][z] %= mod;
			}
		}
	}
	while(t--){
		int a, b;
		cin >> a >> b;
		cout << dp[a][b] << endl;
	}
}
