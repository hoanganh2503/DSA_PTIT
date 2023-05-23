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
		int arr[n], dp[k+1];
		f(i, 0, n-1) cin >> arr[i];
		memset(dp, 0);
		dp[0] = 1;
		f(i, 1, k){
			f(j, 0, n-1){
				if(i >= arr[j]){
					dp[i] = dp[i] + dp[i-arr[j]];
					dp[i] %= mod;
				}
			}
		}
		cout << dp[k] << endl;
	}
}
