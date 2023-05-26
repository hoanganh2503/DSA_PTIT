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
int n, m;
int parent[1001];
vector<pair<int,int>> ke;

int find_parent(int u){
	return u == parent[u] ? u : parent[u] = find_parent(parent[u]);
}

void init(){
	f(i, 1, n) parent[i] = i;
}

int check(vector<pair<int, int>> ke){
	for(auto it:ke){
		int a = find_parent(it.first);
		int b = find_parent(it.second);
		if(a == b){
			return 1;
		}
		parent[a] = b;
	}
	return 0;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			ke.push_back({a, b});
		}
		if(check(ke)) cout << "YES\n";
		else cout << "NO\n";
	}
}
