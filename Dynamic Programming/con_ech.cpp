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
const ll mod = 1e9 + 7;

using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n, k = 3;
		cin >> n;
		ll dp[n+5] = {0};
		dp[0] = dp[1] = 1;
		f(i, 2, n){
			f(j, 1, min(i, k)){
				dp[i] += dp[i-j];
			}
		}
		cout << dp[n] << endl;
	}
}
