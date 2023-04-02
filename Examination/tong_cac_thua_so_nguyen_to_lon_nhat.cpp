#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()

using namespace std;

int L, R;

int sang(int n){
	int ans = 0;
	f(i, 2, sqrt(n)){
		if(n % i == 0){
			ans = i;
			while(n % i == 0) n/= i;
		}
	}
	if(n != 1) ans = n;
	return ans;
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		cin >> L >> R;
		ll ans = 0;
		f(i, L, R) ans += sang(i);
		cout << ans << endl;
	}
}
