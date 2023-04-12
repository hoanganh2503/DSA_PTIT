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
	cin.ignore();
	while(t--){
		string s;
		cin >> s;
		if(s[0] == '0'){
			cout << 0 << endl;
			continue;
		}
		int n = s.sz;
		int dp[n+1];
		memset(dp, 0);	
		dp[0] = dp[1] = 1;
		f(i, 2, n){
			dp[i] = 0;
			if(s[i-1] > '0'){
				dp[i] = dp[i-1];
			}
			if(s[i-2] == '1' or (s[i-2] == '2' and s[i-1] <'7' ))
				dp[i] += dp[i-2];
		}
		cout << dp[n] << endl;
	}
}
