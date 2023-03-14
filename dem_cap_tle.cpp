#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll countPairs(ll a[], ll n, ll k)
{
    sort(a, a + n);
 
    ll res = 0;
    for (ll i = 0; i < n; i++) {
 
        ll val = a[i] + k;
        ll y = lower_bound(a, a + n, val) - a;
        res += (y - i - 1);
    }
    return res;
}

int main(){
	int t;
	cin >> t;
	ll n, m;
	while(t--){
		cin >> n >> m;
		ll arr[n];
		for(ll i = 0 ; i < n ; i++) cin >> arr[i];
		cout << countPairs(arr, n , m) << endl;
	}
}
