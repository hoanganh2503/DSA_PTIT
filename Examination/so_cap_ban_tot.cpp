#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		const int maxx = 10001;
		int n, k, arr[maxx], dp[maxx][25];
		string str;
		cin >> n >> k;
		f(i, 1, n) {
			cin >> str;
			arr[i] = str.length();
		}
		f(i, 1, n) dp[i][0] = 0;
		f(i, 1, 20) dp[0][i] = 0;
		f(j, 1, 20){
			f(i, 1, n)
			if(arr[i] == j)
				dp[i][j] = dp[i-1][j]+1;
			else dp[i][j] = dp[i-1][j];
			
		}
		
		ll ans = 0;
		int cmd;
		f(i, 1, n){
			cmd = 0;
			cmd = max(i-k-1, cmd);
			ans += dp[i][arr[i]] - dp[cmd][arr[i]] - 1;
		}	
	cout << ans;		
	}

}
