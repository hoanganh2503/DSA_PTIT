#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;
ll mod = 123456789;

ll power(ll a, ll b) {
	if(b==0) return 1;
	ll x = power(a, b/2);
	if(b%2 == 0) return x*x%mod;
	else return a*(x*x%mod)%mod;
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		ll a, b = 0, c;
		cin >> a;

		cout << power(2, a-1)<<endl;
	}
}
