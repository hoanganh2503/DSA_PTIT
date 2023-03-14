#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;
ll mod = 1e9+7;

ll power(ll a, ll b) {
	if(b==0) return 1;
	ll x = power(a, b/2);
	if(b%2 == 0) return x*x%mod;
	else return a*(x*x%mod)%mod;
}

int main() {
	while(1){
		ll a, b;
		cin >> a >> b;
		if(a == 0 && b == 0) break;
		cout << power(a, b)<<endl;
	}
}
