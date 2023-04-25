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
vector<int> vt[1000];
bool used[1000];
int n, m, cnt = 0, x;
string T;

void tree_DFS(int u){
	used[u] = true; // danh dau da di qua canh u
	for(auto v:vt[u]){
		if(!used[v]){
			cnt++;
			T += "(" + to_string(u) + "," + to_string(v) + ") ";
			tree_DFS(v);
		}
	}
	
}

void tree_graph_DFS(){
	//khoi tao gia tri cho mang used = false tuc la chua canh nao duoc di qua
	memset(used, false);
	cnt = 0;
	T = "";
	tree_DFS(x);
	if(cnt < n-1) cout << "Do thi khong lien thong" << endl;
	else cout << T << endl;
	
}

int main() {
	cout << "Nhap so dinh: ";
	cin >> n;
	cout << "Nhap so cap canh: ";
	cin >> m;
	cout <<"Nhap danh sach canh: \n";
	int a, b;
	f(i, 1, m){
		cin >> a >> b;
		vt[a].pb(b);
		vt[b].pb(a);
	}
	cout <<"\nNhap dinh bat dau: ";
	cin >>x;
	tree_graph_DFS();
}

//exam
//13 22
//1 2 
//1 3
//1 4
//2 3
//2 4
//3 4
//3 5
//5 6
//5 7
//5 8
//5 9
//6 7
//6 9
//7 8
//8 9
//9 10
//10 11
//10 12
//10 13
//11 12
//11 13
//12 13

