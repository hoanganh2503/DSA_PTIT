#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define f_(i,a,b) for(ll i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
#define sz size()
#define pb(x) push_back(x)

using namespace std;

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		int n, q;
		cin >> n >> q;
		ll arr[n], a[n];
		f(i, 1, n) cin >> arr[i];
		stack<int> st;
		f_(i, n-1, 0){
			while(!st.empty() and arr[st.top()] >= arr[i]) st.pop();
			if(st.empty()) a[i] = 0;
			else a[i] = st.top();
			st.push(i);
		}
		f(i, 0 ,n-1) cout << a[i] << ' ';
//		f(i, 1, q){
//			int x;
//			cin >> x;
//			int dem = 0;
//			while(x != 0){
//				dem ++;
//				x = a[x-1];
//			}
//			cout << dem << endl;
//		}
	}
}