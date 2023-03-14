#include<bits/stdc++.h>
#include<string>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i= a ; i <= b ; i++)

using namespace std;

int handle(int n, ll m) {
	ll x = pow(2, n-1);
	if(x == m) return n;
	if(m < x) return handle(n-1, m);
	return handle(n-1, m-x);
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, m;
		cin >> n >> m;
		cout << handle(n, m) << endl;
	}
}
