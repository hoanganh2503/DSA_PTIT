#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()

using namespace std;
int n, m;
int parent[1001], sz[1001];


struct edge{
	int u, v;
	int w;
};
vector<edge> canh;
void init(){
	f(i, 1, n){
		parent[i] = i;
		sz[i] = 1;
	}
}

inline int cmp(edge a, edge b){
	return a.w < b.w;
}

int find_parent(int v){
	return v == parent[v] ? v : parent[v] = find_parent(parent[v]);
}

bool Union(int a, int b){
	a = find_parent(a);
	b = find_parent(b);
	if(a == b) return false;
	if(sz[a] < sz[b]) swap(a, b);
	parent[b] = a;
	sz[a] + sz[b];	
	return true;
}

void kruskal(){
	vector<edge> mst;
	int d = 0;
	sort(canh.begin(), canh.end(), cmp);
	f(i, 0, m-1){
		if(mst.size() == n-1) break;
		edge e = canh[i];
		if(Union(e.u, e.v)){
			mst.push_back(e);
			d+= e.w;
		}
	}
	if(mst.size() < n-1) cout << "Khong ton tai cay khung!";
	else cout << "Do dai nho nhat cua cay khung: " << d <<endl;
	for(auto i:mst) cout << i.u << ' ' << i.v << ' ' << i.w << endl;
}

int main() {
	cout << "Nhap so dinh: ";
	cin >> n;
	cout << "Nhap so cap canh: ";
	cin >> m;
	cout <<"Nhap danh sach canh: \n";
	int a, b;
	f(i, 1, m){
		int x, y, z;
		cin >> x >> y >> z;
		edge e ;
		e.u = x; e.v = y ; e.w = z;
		canh.push_back(e);
	}
	init();
	kruskal();
}

//example
//6 9
//1 2 12
//1 3 4
//2 3 1
//2 4 5
//2 5 3
//3 5 2
//4 5 3
//4 6 10
//5 6 8

