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
int used[20001];
vector<int> ke[20001];
int n, m;


void DFS(int u){
	used[u] = 1;
	for(auto v : ke[u]) {
		if(!used[v]) DFS(v);
	}
}

void tplt(){
	priority_queue<pair<int, int>> q;
	int tplt = 0;
	f(i, 1, n){
		if(!used[i]){
			tplt++;
			DFS(i);
		}
	}
	f(i, 1, n){
		int dem = 0;
		memset(used, 0);
		used[i] = 1;
		f(j, 1, n){
			if(!used[j]){
				dem++;
				DFS(j);
			}
		}
		q.push({dem, i});
	}
	int top = q.top().first;
	if(top == tplt) cout << 0 << endl;
	else{
		int arr[100001], l = 0;
		while(1){
			pair<int, int> p = q.top();
			if(p.first == top){
				arr[l++] = p.second;
				q.pop();
			}else break;
		}		
		sort(arr, arr+l);
		f(i, 0, l-1) cout << arr[i];
		cout << endl;
	}

	
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		memset(used, 0);
		memset(ke, 0);
		cin >> n >> m;
		f(i, 1, m){
			int x, y;
			cin >> x >> y;
			ke[x].pb(y);
			ke[y].pb(x);
		}
		tplt();
	}
}
