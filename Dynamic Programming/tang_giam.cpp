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
		int n;
		cin >> n;
		double a[n], b[n];
		f(i, 0, n-1) cin >> a[i] >> b[i];
		int dp[n+1];
		memset(dp, 0);
		dp[0] = 1;
		f(i, 0, n-1){
			f(j, 0, i){
				if(a[i] > a[j] and b[i] < b[j]) dp[i] = max(dp[i], dp[j] + 1);
			}
		}
//		f(i, 0, n) cout << dp[i] << ' ';
//		cout << endl;
		cout << *max_element(dp, dp+n) << endl;
	}
}
