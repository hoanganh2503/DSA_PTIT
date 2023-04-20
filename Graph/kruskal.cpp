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

int n, m, parent[1001], siz[1001];

struct edge{
	int u, v, w;
};
vector<edge> canh;

inline int cmp(edge a, edge b){
	return a.w < b.w;
}

void init(){
	f(i, 0, n){
		parent[i] = i;
		siz[i] = 1;
	}
}

int find_parent(int a){
	return a == parent[a] ? a : parent[a] = find_parent(parent[a]);
}

bool Union(int a, int b){
	a = find_parent(a);
	b = find_parent(b);
	if(a == b) return false;
	if(siz[a] < siz[b]) swap(a, b);
	parent[b] = a;
	siz[a] + siz[b];
	return true;
}

void kruskal(){
	vector<edge> mst;
	int d = 0;
	sort(all(canh), cmp);
	f(i, 0, m-1){
		if(mst.sz == n-1) break;
		edge e = canh[i];
//		cout << e.u <<' ' << e.v << ' ' << e.w << endl;
		if(Union(e.u, e.v)){
			mst.pb(e);
//			cout << e.w <<' ';
			d += e.w;
		}
	}
	
	cout << d << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		canh.clear();
		memset(parent, 0);
		memset(siz, 0);
		f(i, 1, m){
			int x, y, z;
			cin >> x >> y >> z;
			edge e;
			e.u = x, e.v = y, e.w = z;
			canh.push_back(e);
		}
		init();
		kruskal();
	}
}
