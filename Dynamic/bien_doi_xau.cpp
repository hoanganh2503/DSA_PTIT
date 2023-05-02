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

int max_length(string s1, string s2){
	int n1 = s1.sz, n2 = s2.sz;
	int dp[n1+1][n2+1];
	s1 = "0" + s1, s2 = "0" + s2;
	memset(dp, 0);
	f(i, 1, n1){
		f(j, 1, n2){
			if(s1[i] == s2[j]) dp[i][j] = dp[i-1][j-1] + 1;
			else dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
		}
	}
	return dp[n1][n2];
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		string s1, s2;
		cin >> s1 >> s2;
		int maximum = max(s1.sz, s2.sz);
		
		cout << maximum-max_length(s1, s2)<< endl;
	}
}
