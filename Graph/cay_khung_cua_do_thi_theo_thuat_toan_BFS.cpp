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
int n, m, x;
int used[1001];
vector<int> vt[1001];
vector<pair<int, int>> ans;

void Tree_BFS(int u){
	queue<int> q;
	q.push(u);
	used[u] = 1;
	while(!q.empty()){
		int x = q.front();
		q.pop();
		for(auto y:vt[x]){
			if(!used[y]){
				used[y] = 1;
				ans.push_back({x, y});
				q.push(y);
			}
		}
	}
}

void tree_BFS_graph(int x){
	Tree_BFS(x);
	if(ans.sz < n-1){
		cout << -1 << endl;
	}
	else{
		for(auto i:ans){
			cout << i.first << ' ' << i.second << endl;
		}
	}
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m >> x;
		memset(used, 0);
		ans.clear();
		memset(vt, 0);
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			vt[a].pb(b);
			vt[b].pb(a);
		}
		tree_BFS_graph(x);
	}
}
