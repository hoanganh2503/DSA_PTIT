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
	int n, q;
	cin >> n >> q;
	int arr[n+1] = {0};
	f(i, 1, q){
		int a, b;
		cin >> a >> b;
		f(i, a, b) arr[i]++;
	}

	f(i, 1, n){
		if(arr[i] % 2 == 0) cout << 0 << ' ';
		else cout << 1 << ' ';
	}
}
