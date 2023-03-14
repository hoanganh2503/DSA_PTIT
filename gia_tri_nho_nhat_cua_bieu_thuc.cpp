#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n], b[n];
		f(i, 0, n-1) cin >> a[i];
		f(i, 0, n-1) cin >> b[i];
		sort(a, a+n);
		sort(b, b+n);
		ll sum = 0;
		f(i, 0, n-1) sum += a[i]*b[n-i-1];
		cout << sum << endl;
	}
}
