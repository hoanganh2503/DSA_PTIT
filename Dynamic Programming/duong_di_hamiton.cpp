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
		if((k == n+1)){
			check = 1;
//			show();
			return;
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
	int t;
	cin >> t;
	while(t--){
		check = 0;
		memset(vt, 0);
		memset(used, 0);
		memset(path, 0);
		cin >> n >> m;
		int a, b;
		f(i, 1, m){
			cin >> a >> b;
			vt[a].pb(b);
			vt[b].pb(a);
		}
		f(i, 1, n)
			hamilton_cycle(i);
		if(check == 0) cout << 0 << endl;
		else cout << 1 << endl;
	}

}
