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
		int n, m, q;
		cin >> n >> m >> q;
		string a, b, c;
		cin >> a >> b >> c;
		int dp[n+1][m+1][q+1];
		memset(dp, 0);
		f(i, 1, n){
			f(j, 1, m){
				f(k, 1, q){
					if(a[i-1] == b[j-1] and a[i-1] == c[k-1]) dp[i][j][k] = dp[i-1][j-1][k-1] + 1;
					else dp[i][j][k] = max(dp[i-1][j][k], max(dp[i][j-1][k], dp[i][j][k-1]));					
				}
			}	
		}
		cout << dp[n][m][q] << endl;
	}
}