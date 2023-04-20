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
	if(!visited[y]){
		cout << -1 << endl;
		return;
	}
	int a = previ[y], ax[1001], l = 0;
	ax[l++] = y;
	while(a != previ[x]){
		ax[l++] = a;
		a = previ[a];
	}
	f_(i, l-1, 0) cout << ax[i] << ' ';
}

int main() {
	int t;
	cin >> t;
	while(t--){
		memset(arr, false);
		memset(visited, 0);
		memset(previ, 0);
		int x, y;
		cin >> n >> m >> x >> y;
		f(i, 0, m-1){
			int a, b;
			cin >> a >> b;
			arr[a].push_back(b);
		}
		BFS(x, y);	
		path(x, y);	
		cout << endl;
	}
}
