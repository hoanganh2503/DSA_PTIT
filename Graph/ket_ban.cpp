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
int siz[100001];
int parent[100001];
int n, m;

void init(){
	f(i, 1, n) siz[i] = 1;
	f(i, 1, n) parent[i] = i;
}

int find_parent(int u){
	return u == parent[u] ? u : parent[u] = find_parent(parent[u]);
}

void Union(int a, int b){
	a = find_parent(a);
	b = find_parent(b);
	if(a != b){
		if(siz[a] < siz[b]) swap(a, b);
		parent[b] = a;
		siz[a] += siz[b];
	}
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		init();
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			Union(a, b);
		}
		cout << *max_element(siz, siz+n) << endl;
	}
}