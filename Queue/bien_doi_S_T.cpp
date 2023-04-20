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
int n, m, arr[101][101];

int BFS(){
	int a[101][101];
	queue<pair<int, int>> q;
	q.push({1, 1});
	a[1][1] = 0;
	while(!q.empty()){
		pair<int, int> p = q.front();
		q.pop();
		if(p.first + arr[p.first][p.second] <= n and !a[p.first + arr[p.first][p.second]][p.second]){
			if(p.first + arr[p.first][p.second] == n and p.second == n) return a[p.first][p.second] + 1;
			else {
				a[p.first + arr[p.first][p.second]][p.second] = a[p.first][p.second] + 1;
				q.push({p.first + arr[p.first][p.second], p.second});
			}
		}
		if(p.second + arr[p.first][p.second] <= m and !a[p.first][p.second + arr[p.first][p.second]]){
			if(p.second + arr[p.first][p.second] == m and p.first == n) return a[p.first][p.second] + 1;
			else {
				a[p.first][p.second + arr[p.first][p.second]] = a[p.first][p.second] + 1;
				q.push({p.first, p.second + arr[p.first][p.second]});
			}
		}
	}
	return -1;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> n >> m;
		f(i, 1, n){
			f(j, 1, m) 
				cin >> arr[i][j];
		}
		cout << BFS() << endl;
	}
}
