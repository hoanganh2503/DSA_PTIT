#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		int n, a, b, count = 0;
		cin >> a >> b;
		n = b;
		vector<ll> vt(n+5, 1);
		f(i, 2, n){
			for(int j = i ; j <= n ; j+=i)
				vt[j] += i;
		}
		f(i, a, b) count += (vt[i] - i > i);
		cout << count ;
	}
}
