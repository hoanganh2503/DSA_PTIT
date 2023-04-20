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
int n, m, deg[1001], deg1[1001];

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		memset(deg, 0)
		memset(deg1, 0)
		cin >> n >> m;
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			deg[a]++;
			deg1[b]++;
		}
		int cnt = 0;
		f(i, 1, n){
			if(deg1[i] == deg[i])
				cnt++;
		}
		if(cnt == n) cout << 1 << endl;
		else cout << 0 << endl;
	}
}
