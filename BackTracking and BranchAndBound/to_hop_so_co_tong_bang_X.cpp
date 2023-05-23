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

vector<int> v;
int n, arr[101], x, check;

void show(vector<int> vt){
	int a[vt.sz], cnt = 0;
	for(auto i:vt) a[cnt++] = i;
	cout << "[";
	f(i, 0, cnt-2) cout << a[i] << ' ';
	cout << a[cnt-1] << "]";
}

void handle(int i, int sum, vector<int> v){
	if(sum > x) return;
	if(sum == x){
		check = 1;
		show(v);
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
		check = 0;
		v.clear();
		memset(arr, 0);
		cin >> n >> x;
		f(i, 1, n) cin >> arr[i];
		sort(arr+1, arr+1+n);
		handle(1, 0, v);
		if(!check) cout << -1;
		cout << endl;
	}
}