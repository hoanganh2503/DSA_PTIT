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
int n, m, x, visited[1001] = {0}; 
// Mang visited danh dau nhung dinh da duoc tham roi

void DFS(int u){
	cout << u << " ";
	// Danh dau dinh u da duoc tham
	visited[u] = true;
	// Duyet tat ca dinh ke cua u
	for(auto x:arr[u]) {
		// Neu x chua duoc duyet thi tien hanh DFS dinh x
		if(!visited[x]) DFS(x);
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
		DFS(x);	
		cout << endl;	
	}

}
