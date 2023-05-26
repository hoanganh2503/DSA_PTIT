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
int parent[1001], used[1001];
vector<int> ke[1001];
vector<pair<int, int>> ans[1001];
vector<int> res;

void init(){
	f(i, 1, n) parent[i] = 0, used[i] = 0;
	memset(ke, 0);
	memset(ans, 0);
	memset(used, 0);
	res.clear();
	check = 0;
}

void show(){
	for(auto it:res)
		cout << it << ' ';
	cout << 1 << endl;
}

void DFS(int u){
	if(check) return;
	used[u] = 1;
	res.push_back(u);
	for(auto v:ke[u]){
		if(v == 1 and v != parent[u]) {
			check = 1;
			show();
			return;
		};
		if(!used[v]){
			parent[v] = u;
			DFS(v);
		}
	}
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		init();
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			ke[a].pb(b);
			ke[b].pb(a);
		}
		f(i, 1, n){
			sort(all(ke[i]));
		}
		DFS(1);
		if(!check) cout << "NO" << endl;
	}
}
