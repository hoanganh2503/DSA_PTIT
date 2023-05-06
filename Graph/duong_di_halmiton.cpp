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

vector<int> vt[1001];
int x, n, m, used[1001], path[1001], check;

void Hamilton(int k){
	for(auto y : vt[path[k-1]]){
		if(k == n+1){
			check = 1;
			return;
		}
		else if(used[y] == 0){
			path[k] = y;
			used[y] = 1;
			Hamilton(k+1);
			used[y] = 0;
		}
	}
}

void halmiton_cycle(int u){
	path[1] = u;
	used[u] = 1;
	Hamilton(2);
}

int main(){
	int t;
	cin >> t;
	while(t--){
		memset(used, 0);
		memset(path, 0);
		check = 0;
		cin >> n >> m;
		f(i, 0, m-1){
			int a, b;
			cin >> a >> b;
			vt[a].pb(b);
			vt[b].pb(a);
		}
//		cin >> x;
		x = 1; 
		halmiton_cycle(x);
		if(check == 1) cout << 1 << endl;
		else cout << 0 << endl;
	}
}