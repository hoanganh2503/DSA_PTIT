#include <algorithm>
#include <iostream>
#define ll long long
 
using namespace std;
 
bool isTriplet(ll arr[], ll n)
{
    for (ll i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];
 
    sort(arr, arr + n);

    for (ll i = n - 1; i >= 2; i--) {
        ll l = 0; 
        ll r = i - 1;
        while (l < r) {
            if (arr[l] + arr[r] == arr[i])
                return true;
            (arr[l] + arr[r] < arr[i]) ? l++ : r--;
        }
    }
 
    return false;
}
 
int main()
{
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll arr[n];
		for(ll i = 0 ; i < n ; i++)
			cin >> arr[i];
		if(isTriplet(arr, n)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
    return 0;
}
