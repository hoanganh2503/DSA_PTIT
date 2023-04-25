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
		int arr[n+1], a[n+1];
		f(i, 0, n-1) cin >> arr[i];
		stack<int> st;
		f(i, 0, n-1){
			while(!st.empty() and arr[i] >= arr[st.top()]) st.pop();
			if(st.empty()) a[i] = -1;
			else a[i] = st.top();
			st.push(i);
		}
		f(i, 0, n-1){
			 cout <<  i - a[i] << ' ';
//	cout << a[i] << ' ';	
		} 
		cout << endl;
	}
}
