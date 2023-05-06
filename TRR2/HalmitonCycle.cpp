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
bool used[1000] = {false};
int n , m, path[100], x, check = 0;

void show(){
	f(i, 1, n) cout << path[i] << ' ';
	cout << x << endl;
}

void halmiton(int k){
	for(auto y:vt[path[k-1]]){
		if((k == n+1) and y == x){
			check = 1;
			show();
		} 
		else if(used[y] == false){
			path[k] = y;
			used[y] = true;
			halmiton(k+1);
			used[y] = false;
		}

	}
}

void hamilton_cycle(int u){
	memset(used, false);
	path[1] = u;
	used[u] = true;
	halmiton(2);
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
	hamilton_cycle(x);
	if(check == 0) cout << "Khong ton tai chu trinh Hamilton";

}

// exam 
//5 7
//1 2
//1 4
//2 3
//2 5
//3 4
//3 5
//4 5
