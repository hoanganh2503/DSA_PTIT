#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	f(i, 0, n-1) cin >> a[i];
	vector<int> L(n+1, 0);
	int res = 0;
	f(i, 0, n-1){
		L[a[i]] = L[a[i]-1]+1;
		res = max(res, L[a[i]]);
	}
	cout << n-res;
}
