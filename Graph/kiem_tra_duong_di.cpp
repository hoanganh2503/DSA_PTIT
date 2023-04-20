#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()

using namespace std;

vector<int> arr[1001];
int n, m, previ[1001];
bool visited[1001] = {0};

void BFS(int u, int y){
	memset(visited, 0);
	memset(previ, 0);
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		if(visited[y]) break;
		int v = q.front();
		q.pop();	
		for(auto x:arr[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
				previ[x] = v;
			}
		}
	}
}

void path(int x, int y){
	if(visited[y]){
		cout << "YES" << endl;
	}
	else cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		memset(arr, false);
		int x, y;
		cin >> n >> m;
		f(i, 0, m-1){
			int a, b;
			cin >> a >> b;
			arr[a].push_back(b);
		}	
		int q;
		cin >> q;
		while(q--){
			cin >> x >> y;
			BFS(x, y);
			path(x, y);
		}	
		cout << endl;
	}
}
