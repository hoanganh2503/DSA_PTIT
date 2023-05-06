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

bool used[1001] = {false};
vector<int> adj[1001];
int n, m, u;

void reInit(){
	memset(adj, 0);
	memset(used, 0);
}

void BFS(int u){
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int top = q.front();
		q.pop();
		cout << top << ' ';
		used[top] = true;
		for(auto v:adj[top]){
			if(!used[v]){
				q.push(v);
				used[v] = true;	
			}
			
		}
	}
}

void DFS(int u){
	cout << u << ' ';
	used[u] = true;
	for(auto v : adj[u]){
		if(!used[v])
			DFS(v);
	}
}

void TPLT(){
	int ans = 0;
	f(i, 1, n){
		if(!used[i]){
			ans++;
			BFS(i);
			cout << endl;
		}
	}
	cout << "So TPLT cua do thi:" << ans << endl;
	if(ans == 1) cout << "Do thi lien thong" << endl;
	else cout << "Do thi khong lien thong" << endl;
}

int main() {
	cin >> n >> m;
	f(i, 1, m){
		int a, b;
		cin >> a >> b;
		adj[a].pb(b);
		adj[b].pb(a);
	}
	TPLT();
}
