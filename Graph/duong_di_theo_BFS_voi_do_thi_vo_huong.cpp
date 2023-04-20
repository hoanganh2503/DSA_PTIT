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
int n, m, visited[1001] = {0}, previ[1001]; 

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
	vector<int> ans;
	while(x != y){
		if(!y){
			cout << -1 << endl;
			return;
		}
		ans.push_back(y);
		y = previ[y];
	}
	ans.push_back(x);
	reverse(all(ans));
	for(auto it:ans) cout << it << ' ';
	cout << endl;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		memset(arr, false);
		memset(visited, 0);
		int x, y;
		cin >> n >> m >> x >> y;
		// Nhap danh sach canh
		f(i, 0, m-1){
			int a, b;
			cin >> a >> b;
			arr[a].push_back(b);
			arr[b].push_back(a);
		}
		BFS(x, y);	
		path(x, y);
		cout << endl;	
	}

}