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
vector<int> ke[1001];
int n, m, color[1001];

bool DFS(int u, int par){
    color[u] = 1 - color[par];
    for(int v : ke[u]){
        if(color[v] == -1){
            if(!DFS(v, u)) return false; 
        }
        else if(color[v] == color[u]) return false;
    }
    return true;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		memset(ke, 0);
		f(i, 1, m){
			int a, b;
			cin >> a >> b;
			ke[a].push_back(b);
			ke[b].push_back(a);
		}
		memset(color, -1);
		int check = 1;
		color[0] = 1;
		f(i, 1, n){
			if(color[i] == -1){
				if(!DFS(i, 0)){
					check = false;
					break;	
				}
				
			}
		}
		if(check) cout << "YES\n";
		else cout << "NO\n";
	}
}
