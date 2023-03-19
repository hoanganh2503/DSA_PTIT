#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
		ll n, ans = 0;
		cin >> n;
		ll arr[n];
		f(i, 0, n-1) cin >> arr[i];
		ll maxx, minn;
		f(i, 0, n-2){
			maxx = max(arr[i], arr[i+1]);
			minn = min(arr[i], arr[i+1]);
			while(maxx > (minn << 1)){
				ans++;
				minn <<= 1;
			}
		}
		cout << ans << endl;
	}
}
