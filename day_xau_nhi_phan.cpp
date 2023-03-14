#include<bits/stdc++.h>
#include<string>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i= a ; i <= b ; i++)

using namespace std;
ll fib[92];

char search(int n, ll k) {
	if(n==1) return '0';
	if(n==2) return '1';
	if(k <= fib[n-2]) return search(n-2, k);
	return search(n-1, k-fib[n-2]);
}

int main() {
	fib[0] = 0;
	fib[1] = 1;
	f(i, 2, 92){
		fib[i] = fib[i-1] + fib[i-2];
	}
	int t;
	cin >> t;
	while(t--) {
		int n;
		ll m;
		cin >> n >> m;
		cout << search(n, m) << endl;
	}
}
