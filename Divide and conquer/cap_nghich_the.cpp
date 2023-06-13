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

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll arr[n];
		f(i, 0, n-1) cin >> arr[i];
		ll ans = 0;
		f(i, 0, n){
			f(j, i+1, n){
				if(arr[i] > arr[j]) ans ++;
			}
		}
		cout << ans << endl;
	}
}
