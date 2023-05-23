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

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll sum = 0;
		f(i, 0, n-1){
			int a;
			cin >> a;
			sum += a + abs(a);
		}
		cout << sum;
	}
}
