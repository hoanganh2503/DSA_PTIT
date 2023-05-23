#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
#define sz size()
#define pb(x) push_back(x)

using namespace std;

int handle(ll *arr, ll n, ll k){
	unordered_map<ll, int> m;
	ll sum = 0;
	f(i, 1, n){
		 sum += arr[i];
		 if(sum == k or m[sum - k]) return 1;
		 m[sum] = 1;
	}
	return 0;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		ll n, k;
		cin >> n >> k;
		ll arr[n+1];
		f(i, 1, n) cin >> arr[i];
		if(handle(arr, n, k)) cout << "YES\n";
		else cout << "NO\n";
	}
}