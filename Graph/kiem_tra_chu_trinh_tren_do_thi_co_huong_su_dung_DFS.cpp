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
int n, m, check;
int used[1001];
vector<int> ke[1001];

void DFS(int u){
	if(check) return;
	used[u] = 1;
	for(auto v:ke[u]){
		if(used[v] == 1){
			check = 1;
			return;
		}
		if(used[v] == 0){
			DFS(v);
		}
	}
	used[u] = 0;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		memset(used, 0);
		memset(ke, 0);
		check = 0;
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
		}
		f(i, 1, n){
			if(!used[i]) DFS(i);
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}
