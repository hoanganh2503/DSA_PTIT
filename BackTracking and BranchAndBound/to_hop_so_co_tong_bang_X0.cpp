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
int n, x, arr[21];
vector<vector<int>> ans;
vector<int> v;

void show(vector<int> v){
	for(auto i : v) cout << i << ' ';
	cout << endl;
}

void handle(int i, int sum, vector<int> v){
	if(sum > x) return;
	if(sum == x){
		ans.push_back(v);
//		show(v);
		return;
	}
	f(j, i, n){
		v.push_back(arr[j]);
		handle(j, sum + arr[j], v);
		v.pop_back();
	}
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		ans.clear();
		v.clear();
		memset(arr, 0);
		cin >> n >> x;
		f(i, 1, n) cin >> arr[i];
		sort(arr+1, arr+n+1);
		handle(1, 0, v);
		if(ans.sz == 0) cout << -1 << endl;
		else{
			cout << ans.sz << ' ';
			f(i, 0, ans.sz- 1){
				cout << "{";
				f(j, 0, ans[i].sz-1){
					if(j != ans[i].sz-1) cout << ans[i][j] << ' ';
					else cout << ans[i][j] << "} ";
				}
				
			}
			cout << endl;
		}
	}
}
