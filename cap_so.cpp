#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll getPairsCount(ll arr[], ll n, ll k)
{
    sort(arr, arr + n);
    ll x = 0, c = 0, y, z;
    for (ll i = 0; i < n - 1; i++) {
        x = k - arr[i];
  
        ll y = lower_bound(arr + i + 1, arr + n, x) - arr;
  
        ll z = upper_bound(arr + i + 1, arr + n, x) - arr;
        c = c + z - y;
    }
    return c;
}

int main(){
	int t;
	cin >> t;
	ll n, m;
	while(t--){
		cin >> n >> m;
		ll arr[n];
		for(ll i = 0 ; i < n ; i++) cin >> arr[i];
		cout << getPairsCount(arr, n , m) << endl;
	}
}
