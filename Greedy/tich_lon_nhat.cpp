#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define all(x) x.begin(), x.end()
#define f(i,a,b) for(ll i = a ; i <= b ; i++)

using namespace std;

int main() {
	int n, k;
	cin >> n;
	vector<int> vt;
	f(i, 0, n-1) {
		cin >> k; 
		vt.push_back(k);
	}
	sort(all(vt));
	int MAX = max(-99999999, vt[0]*vt[1]);
	MAX = max(MAX, vt[n-2]*vt[n-1]);
	MAX = max(MAX, vt[n-3]*vt[n-2]*vt[n-1]);
	MAX = max(MAX, vt[0]*vt[1]*vt[n-1]);
	
	cout << MAX;
}
