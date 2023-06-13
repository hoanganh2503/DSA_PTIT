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
		int n, s;
		cin >> n >> s;
		int arr[n], dp[40001];
		memset(arr, 0);
		memset(dp, 0);
		F(i, 1, n) cin >> arr[i];
		dp[0] = 1;
		f(i, 0, n-1){
			for(int j = s; j >=arr[i] ; j--){
				if(dp[j] == 0 and dp[j-arr[i]] == 1) dp[j] = 1;
			}
		}
		if(dp[s]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
}
