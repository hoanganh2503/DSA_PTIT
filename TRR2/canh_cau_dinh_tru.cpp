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
vector<pair<int, int>> dscanh;

void BFS(int u){
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int top = q.front();
		q.pop();
//		cout << top << ' ';
		used[top] = true;
		for(auto v:adj[top]){
			if(!used[v]){
				q.push(v);
				used[v] = true;	
			}
			
		}
	}
}

void BFS2(int u, int a, int b){
	queue<int> q;
	q.push(u);
	used[u] = true;
	while(!q.empty()){
		int top = q.front();
		q.pop();
//		cout << top << ' ';
		used[top] = true;
		for(auto v:adj[top]){
			if((top == a and v == b) or (top == b and v == a)) continue;
			if(!used[v]){
				q.push(v);
				used[v] = true;	
			}
			
		}
	}
}

void DFS(int u){
//	cout << u << ' ';
	used[u] = true;
	for(auto v : adj[u]){
		if(!used[v])
			DFS(v);
	}
}

void DFS2(int u, int a, int b){
	used[u] = true;
	for(auto v : adj[u]){
		if((u == a and v == b) or (u == b and v == a)) continue;
		if(!used[v]) DFS2(v, a, b);			
	}
}

void dinh_tru(){
	memset(used, 0);
	int ans = 0, dem = 0, tplt = 0;
	f(i, 1, n){
		if(!used[i]){
			tplt++;
			BFS(i);
		}
	}
	f(i, 1, n){
		memset(used, false);
		used[i] = true;
		dem = 0;
		f(j, 1, n){
			if(!used[j]){
				dem++;
				BFS(j);
			}
		}
		if(dem > tplt) cout << i << ' ', ans++;
		
	}
	
	cout << ans << endl;
}

void canh_cau(){
	memset(used, 0);
	int ans = 0, tplt = 0;
	f(i, 1, n){
		if(!used[i]){
			tplt++;
			DFS(i);
		}
	}
//	cout <<tplt << endl;
	for(auto it:dscanh){
		int a = it.first;
		int b = it.second;
		memset(used, false);
		int dem = 0;
		f(j, 1, n){
			if(!used[j]){
				BFS2(j, a, b);
				dem++;
			}
		}
		if(dem > tplt) ans ++;
	}
	cout << ans << endl;
}

int main() {

		cin >> n >> m;
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			adj[a].pb(b);
			adj[b].pb(a);
			dscanh.push_back({a, b});
		}
//		dinh_tru();
		canh_cau();
}
