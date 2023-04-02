#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n, s, k;
		cin >> n >> s >> k;
		int arr[n];
		f(i, 0, n-1) cin >> arr[i];
		int l = s-1, check = 1;
		ll sum = 0;
		while(check && l >= 0){
			cout << sum << " ";
			if(sum + arr[l] <= k){
				sum += arr[l];
				l--;
			}else check = 0;
		}
		if(l == s-1) cout << -1 << endl;
		else cout << l + 1 << endl;
	}
}
