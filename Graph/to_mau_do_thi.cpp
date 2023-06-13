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
int color[1001], n, m, x;
vector<int> ke[1001];

void init(){
	memset(color, 0);
	memset(ke, 0);
}

int check(int u, int c){
	for(auto it:ke[u]){
		if(color[it] == c) return 0;
	}
	return 1;
}

int solve(int c){
	int ans = 0;
	f(i, 1, n){
		if(!color[i] and check(i, c)){
			color[i] = c;
			ans++;
		}
	}
	return ans;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m >> x;
		init();
		f(i, 1 , m){
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		int ans = 0, mau = 1;
		while(ans < n){
			ans+=solve(mau++);
		}
		f(i, 1, n) cout << color[i] << ' ';
		cout << endl;
		if(mau - 1 <= x) cout << "YES\n";
		else cout << "NO\n";
	}
}
