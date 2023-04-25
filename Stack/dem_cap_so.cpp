#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define f_(i,a,b) for(ll i = a ; i >= b ; i--)
#define F(i,a,b) for(ll i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
#define sz size()
#define pb(x) push_back(x)

using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll arr[n], a[n], b[n];
		stack<ll> st1;
		stack<ll> st;
		f(i, 0, n-1) cin >> arr[i];
		f(i, 0, n-1){
			while(!st.empty() and arr[i] >= arr[st.top()]) st.pop();
			if(st.empty()) a[i] = -1;
			else a[i] = st.top();
			st.push(i);
		}
		f_(i, n-1, 0){
			while(!st1.empty() and arr[i] >= arr[st1.top()]) st1.pop();
			if(st1.empty()) b[i] = -1;
			else b[i] = st1.top();
			st1.push(i);
		}
		ll dem = 0;
		f(i, 0, n-1) cout << a[i] << ' ';cout << endl;
		f(i, 0, n-1) cout << b[i] << ' ';
//		f(i, 1, n-1) {
//			if( a[i] and arr[i+1] >= arr[i]) dem++;
//			
//		cout << dem + n - 1 << endl;
	}
}
