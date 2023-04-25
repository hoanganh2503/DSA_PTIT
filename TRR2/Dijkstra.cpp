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

const int maxn = 1000;
const int inf = 1e9;
int n, m, s;
vector<pair<int, int>> adj[maxn];
int truoc[10000];

void show(int k){
	if(k == s){
		cout << endl;
		return;
	} 
	cout << truoc[k] << ' ';
	return show(truoc[k]);
}

void dijkstra(int s){
	vector<ll> d(n+1, inf);
	d[s] = 0;
	truoc[s] = s;
	//Q chứa 2 giá trị, giá trij thứ nhất là khoảng cách, giá trị thứ 2 là đỉnh
	priority_queue< pair<int, int> , vector<pair<int, int>> , greater<pair<int, int>> > Q;
	// đưa s vào với thứ tự ưu tiên là số 1(khoảng cách tương đương với giá trị ưu tiên
	// khoảng cách càng nhỏ thì càng được ưu tiên lên đầu hàng đợi
	Q.push({0, s});
	while(!Q.empty()){
		pair<int, int> top = Q.top();
		Q.pop();
		int u = top.second;
		int kc = top.first;
		// Nếu khoảng cách lớn hơn d[u] thì trực tiếp xét đến đỉnh tiếp theo
		if(kc > d[u]) continue;
		for(auto it:adj[u]){
			int v = it.first;
			int w = it.second;
			if(d[v] > d[u] + w){
				d[v] = d[u] + w;
				Q.push({d[v], v});
				truoc[v] = u;
			}
		}
	}
	f(i, 1, n) {
		cout << "Dinh " << i << " co duong di ngan nhat voi gia tri "<< d[i]  << " voi lo trinh: "<< endl;	
		show(i);
	}
	
}


int main() {
	cout << "Nhap so dinh cua do thi : ";
	cin >> n;
	cout << "Nhap so canh cua do thi : ";
	cin >> m;
	cout << "Nhap dinh dau tien : ";
	cin >> s;
	f(i, 1, m){
		int a, b, c;
		cin >> a >> b >> c;
		adj[a].push_back({b, c});
		//Đối với đồ thị vô hướng
		//adj[b].pb({a, c});
	}
	dijkstra(s);
}
//6 8 1
//1 2 7
//1 3 12
//2 3 2
//2 4 9
//3 5 10 
//4 6 1
//5 4 4
//5 6 5

