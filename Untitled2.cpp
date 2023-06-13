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
long long arr[300005];
int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		long long prev_sum = 0;
		ll next_sum = 0;
		f(i, 1, 3*n){
			cin >> arr[i];
			if(i <= 3*n/2) prev_sum += arr[i];
			else next_sum += arr[i];
		}
		sort(arr+1, arr+3*n/2);
		sort(arr + 3*n/2+1, arr + 3*n);

		f(i, 1, n/2){
			prev_sum -= arr[i];
			next_sum -= arr[3*n - i + 1];
		}
		cout << prev_sum - next_sum;
	}
}