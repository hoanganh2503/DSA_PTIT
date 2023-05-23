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
int n, m, x;
vector<pair<int, int>> vt[1005];


void Dijkstra(int v){
	vector<ll> d(n+1, 1e9);
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
	Q.push({0, v});
	d[v] = 0;
	while(Q.sz){
		pair<int, int> top = Q.top();
		Q.pop();
		int x = top.second, y = top.first;
		if(y > d[x]) continue; 
		for(auto it:vt[x]){
			int a = it.first;
			int b = it.second;
			if(d[a] > d[x] + b){
				d[a] = d[x] + b;
				Q.push({d[a], a});
			}
		}
	}
	f(i, 1, n) cout << d[i] << ' ';
	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		memset(vt, 0);
		cin >> n >> m >> x;
		f(i, 1, m){
			int a, b, c;
			cin >> a >> b >> c;
			vt[a].push_back({b, c});
			vt[b].push_back({a, c});
		}
		Dijkstra(x);
	}
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

