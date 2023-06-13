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

ll dp[101][101];
ll mod = 1e9 + 7;

void init(){
	f(i, 0, 9) dp[1][i] = 1;
	f(i, 2, 100){
		f(j, 0, 9){
			f(k, j, 9){
				dp[i][j] += dp[i-1][k];
				dp[i][j] %= (mod);
			}
		}
	}
//	f(i, 0, 3){
//		f(j, 0, 9) cout << dp[i][j] << ' ';
//		cout << endl;
//	}
}

int main() {
	int t = 1;
	cin >> t;
	init();
	while(t--){
		int n;
		ll ans = 0;
		cin >> n;
		f(i, 0, 9) ans+=dp[n][i], ans %= mod;
		cout << ans << endl;
	}
}
