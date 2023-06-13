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
	int t ;
	cin >> t;
	while(t--){
		cin.ignore();
		string a, b;
		cin >> a >> b;
		int n = a.sz, m = b.sz;
		int dp[n+1][m+1];
		memset(dp, 0);
		f(i, 1, n){
			f(j, 1, m){
				if(a[i-1] == b[j-1]) dp[i][j] = dp[i-1][j-1] + 1;
				else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
			}	
		}
		cout << dp[n][m] << endl;
	}
}