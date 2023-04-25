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
int used[20001];
vector<int> ke[20001];
vector<pair<int, int>> edge_list;
int n, m;


void DFS(int u){
	used[u] = 1;
	for(auto v : ke[u]) {
		if(!used[v]) DFS(v);
	}
}

void DFS2(int u, int x, int y){
	used[u] = 1;
	for(auto v : ke[u]) {
		if((u == x and v == y) or (u == y and v == x)) continue;
		if(!used[v]) DFS2(v, x, y);
	}
}

void tplt(){
	int tplt = 0, tru = 0, cau = 0;
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
		if(dem > tplt) tru++; 
	}
	
	for(auto it : edge_list){
		int x = it.first, y = it.second;
		memset(used, 0);
		int dem = 0;
		f(j, 1, n){
			if(!used[j]){
				DFS2(j, x, y);
				dem ++;
			}
		}
		if(dem > tplt) cau ++;
	}
	cout << tru << ' ' << cau;
}

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		memset(used, 0);
		memset(ke, 0);
		cin >> n >> m;
		f(i, 1, m){
			int x, y;
			cin >> x >> y;
			ke[x].pb(y);
			ke[y].pb(x);
			edge_list.push_back({x, y});
		}
		tplt();
	}
}
