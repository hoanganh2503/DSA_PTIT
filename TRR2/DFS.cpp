#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()


using namespace std;

vector<int> arr[100];
int n, m, visited[100] = {0}; 
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
	memset(arr, false);
	cin >> n >> m;
	// Nhap danh sach canh
	f(i, 0, m-1){
		int a, b;
		cin >> a >> b;
		arr[a].push_back(b);
		arr[b].push_back(a);
	}
	DFS(1);
}
