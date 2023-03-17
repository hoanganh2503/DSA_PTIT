#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

ll mod = 1e9+7;

int main() {
	int t ;
	cin >> t;
	while(t--){
		priority_queue<int, vector<int>, greater<int>> pq;
		ll n, m, fi, se, otp = 0;
		cin >> n;
		f(i, 0, n-1) {
			cin >> m;
			pq.push(m);
		}
		while(pq.size() > 1){
			fi = pq.top();
			pq.pop();
			se = pq.top();
			pq.pop();
			otp += fi+se;
			otp%=mod;
			ll k = (fi+se)%mod;
			pq.push(k);
		}
		cout << otp << endl;
	}
}
