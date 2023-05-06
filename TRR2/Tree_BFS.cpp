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

void tree_BFS(int u){
	T = "";
	queue <int> q;
	q.push(u);
	memset(used, true);
	used[u] = false;
	while(!q.empty()){
		int v = q.front();
		q.pop();
		for(auto x:vt[v]){
			if(used[x] == true){
				used[x] = false;
				q.push(x);
				cnt++;
				T += "(" + to_string(v) + "," + to_string(x) + ") ";
			}
		}
	}
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
	tree_BFS(x);
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
