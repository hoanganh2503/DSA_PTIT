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
const ll mod = 1e9 + 7;

ll power(ll a, ll b){
	if(b == 0) return 1;
	if(b%2 == 0) return power(a, b/2)*power(a, b/2) % mod;
	else return (power(a, b/2)*power(a, b/2) % mod)*a%mod;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		ll n, k, ans = 0;
		cin >> n >> k;
		f(i, 1, n){
			ans += power(i, k) % mod;
			ans %= mod;
		}
		cout << ans << endl;
	}
}
