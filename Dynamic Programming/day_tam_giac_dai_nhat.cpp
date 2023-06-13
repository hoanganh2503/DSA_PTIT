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
		int n;
		cin >> n;
		int arr[n+1], increase[n+1], decrease[n+1];
		memset(arr, 0);
		memset(increase, 0);
		memset(decrease, 0);
		int in = 1, de = 1;
		f(i, 1, n){
			cin >> arr[i];
			if(i != 1){
				if(arr[i] > arr[i-1]) de = 0;
				else in = 0;				
			}
		}
		if(in or de){
			cout << n << endl;
			continue;
		}
		f(i, 1, n){
			if(arr[i] > arr[i-1] and i != 1) increase[i] = increase[i-1] + 1;
			else increase[i] = 1;
		}
		f_(i, n, 1){
			if(arr[i] > arr[i+1] and i != n) decrease[i] = decrease[i+1] + 1;
			else decrease[i] = 1;
		}
//		f(i, 1, n) cout << increase[i] << ' ';
//		cout << endl;
//		f(i, 1, n) cout << decrease[i] << ' ';
//		cout << endl;
		int ans = 0;
		f(i, 1, n){
			if( increase[i] > 1 and decrease[i] > 1)
			ans = max(ans, (increase[i] + decrease[i] - 1));
		}
		cout << ans << endl;
	}
}
