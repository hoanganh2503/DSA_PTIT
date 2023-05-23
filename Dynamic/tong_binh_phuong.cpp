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
int dp[10001];

void init(){
	dp[0] = 0;
	dp[1] = dp[4] = 1;
	dp[2] = 2;
	dp[3] = 3;
	f(i, 5, 10001){
		dp[i] = i;
		f(j, 1, ceil(sqrt(i))){
			if(j*j > i) break;
			else dp[i] = min(dp[i], 1 + dp[i-j*j]);
		}
	}
//	f(i, 0, 10001) cout << dp[i] << ' ';
//	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	init();
	while(t--){
		int n;
		cin >> n;
		cout << dp[n] << endl; 	
	}
}
