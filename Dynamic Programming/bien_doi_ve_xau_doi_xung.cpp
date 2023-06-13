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

const int MAXN = 105;

int main() {
    int t = 0;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int length = s.sz, ans = 1;
        s = "0" + s;
        int dp[length + 1][length + 1];
        memset(dp, 0);
        f(i, 1, length+1) dp[1][i] = 1;
        f(i, 1, length-1+1) {
        	if(s[i] == s[i+1]) dp[2][i] = 2;
			else dp[2][i] = 1;	
		}
        f(i, 3, length+1){
            f(j, 1, length-i+1+1){
                int k = j+i-1;
				if(s[j] == s[k]) dp[i][j] = dp[k-j-1][j+1] + 2;
				else dp[i][j] = max(dp[i-1][j], dp[i-1][j+1]);
            }
        }
		cout << length-dp[length+1][1] << endl;
    }
    return 0;
}