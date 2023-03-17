#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	f(i, 0, n-1) cin >> a[i];
	vector<int> L(n, 1);
	f(i, 0, n-1){
		f(j, 0, i-1){
			if(a[i] > a[j]){
				L[i] = max(L[i], L[j]+1);
			}
		}
	}
	cout << *max_element(L.begin(), L.end());
}
