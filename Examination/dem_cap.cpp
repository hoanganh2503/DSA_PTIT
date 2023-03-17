#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll count(ll x, ll Y[], ll n, ll NoOfY[])
{
    if (x == 0)
        return 0;
 
   if (x == 1)
        return NoOfY[0];
 
    ll* idx = upper_bound(Y, Y + n, x);
    ll ans = (Y + n) - idx;
    
    ans += (NoOfY[0] + NoOfY[1]);
 
    if (x == 2)
        ans -= (NoOfY[3] + NoOfY[4]);
 
    if (x == 3)
        ans += NoOfY[2];
 
    return ans;
}
 
ll countPairs(ll X[], ll Y[], ll m, ll n)
{
    ll NoOfY[5] = { 0 };
    for (ll i = 0; i < n; i++)
        if (Y[i] < 5)
            NoOfY[Y[i]]++;
 
    sort(Y, Y + n);
 
    ll total_pairs = 0; 
 
    for (ll i = 0; i < m; i++)
        total_pairs += count(X[i], Y, n, NoOfY);
 
    return total_pairs;
}
 
int main(){
	int t;
	cin >> t;
	ll n, m;
	while(t--){
		cin >> n >> m;
		ll X[n] = {0}, Y[m] = {0};

		for(ll i = 0 ; i < n ; i++) cin >> X[i];
		for(ll i = 0 ; i < m ; i++) cin >> Y[i];
		    cout << countPairs(X, Y, n, m);
		
		cout << endl;
	}
}
