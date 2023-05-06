#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()

using namespace std;
int n, m;
set<int> arr[1000];
int deg[1000];

void Euler(int v){
	stack<int> st;
	vector<int> vt;
	st.push(v);
	while(!st.empty()){
		int z = st.top();
		if(arr[z].size() != 0){
			int b = *arr[z].begin();
			st.push(b);
			arr[z].erase(b);
			arr[b].erase(z);
		}
		else {
			st.pop();
			vt.push_back(z);
		}
	}
	for(auto i:vt) cout << i << ' ';
}

int main() {
	cin >> n >> m;
	f(i, 0, m-1){
		int a, b;
		cin >> a >> b;
		arr[a].insert(b);
		arr[b].insert(a);
		deg[a]++;
		deg[b]++;
	}
	Euler(1);
}
