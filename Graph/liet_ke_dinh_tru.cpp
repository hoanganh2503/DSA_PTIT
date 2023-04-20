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
int n, m, used[1001];
vector<int> adj[1001];

void DFS(int u){
	used[u] = 1;
	for(auto v:adj[u]){
		if(!used[v])
			DFS(v);
	}
}

void tplt(){
	int tplt = 0;
	f(i, 1, n){
		if(!used[i]){
			tplt++;
			DFS(i);
		}
	}
	f(i, 1, n){
		int dem = 0;
		memset(used, 0);
		used[i] = 1;
		f(j, 1, n){
			if(!used[j]){
				dem++;
				DFS(j);
			}
		}
		if(dem > tplt) cout << i << ' ';
	}
	cout << endl;
	
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		memset(used, 0);
		memset(adj, 0);
		cin >> n >> m;
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
		tplt();
	}
}