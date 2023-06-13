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

int dem(int n, int d){
	int p = 1, ans = 0, l = n, r = 0;
	while(l > 0){
		int x = l%10;
		l /= 10;
		ans += l*p;
		if(x == d) ans += r+1;
		else if(x > d) ans += p;
		p*= 10;
		r = n%p;
	}
	if(d == 0) ans -= (p-1)/9;
	return ans;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		ll a , b;
		cin >> a >> b;
		if(a > b) swap(a, b);
		int cnt[10];
		f(i, 0, 9){
			cnt[i] = dem(b, i);
			if(a - 1 > 0) cnt[i] -= dem(a-1, i);
		}
		f(i, 0, 9) cout << cnt[i] << ' ';
		cout << endl;
	}
}
