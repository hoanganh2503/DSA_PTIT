#include<bits/stdc++.h>
using namespace std;
string s;
int n;
int dp[100][100];


void handle(){
			int max_len = 0;
		for(int i = 1 ; i <= n ; i++){
			for(int j =1 ; j <= n ; j++){
				if(s[i-1] == s[j-1] && i != j){
					dp[i][j] = dp[i-1][j-1] + 1;
				}
				else dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
			}
		}	
		cout << dp[n][n] << endl;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >>  s;
		memset(dp, 0, sizeof(dp));
		handle();
	}
}
