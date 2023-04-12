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
int n, m, x;
// Mang visited danh dau nhung dinh da duoc tham roi
bool visited[1001] = {0};

void BFS(int u){
	// Khoi tao danh sach hang doi
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty()){
		// Lay ra phan tu dau hang doi
		int v = q.front();
		q.pop();	
		cout << v << ' ';
		for(auto x:arr[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
		memset(arr, false);
		memset(visited, 0);
		cin >> n >> m >> x;
		// Nhap danh sach canh
		f(i, 0, m-1){
			int a, b;
			cin >> a >> b;
			arr[a].push_back(b);
			arr[b].push_back(a);
		}
		BFS(x);		
		cout << endl;
	}
}
