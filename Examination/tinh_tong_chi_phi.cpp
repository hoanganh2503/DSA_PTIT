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
	priority_queue<ll, vector<ll>, greater<ll>> Q;
	ll n, k, cost = 0;
	cin >> n >> k;
	f(i, 1, n){
		ll a;
		cin >> a;
		Q.push(a);
	}
	while(Q.sz > 1){
		ll sum = 0;
		if(Q.sz >= k){
			ll minx = Q.top();
			Q.pop();
			sum += minx;
			f(i, 1, k-2){
				ll top = Q.top();
				Q.pop();
				sum += top;
			}	
			ll maxx = Q.top();
			Q.pop();
			cost += maxx - minx;
			sum += maxx;
			Q.push(sum);	
		}
		else{
			ll minx = Q.top();
			Q.pop();
			sum += minx;
			while(Q.sz > 1){
				ll top = Q.top();
				Q.pop();
				sum += top;
			}
			int maxx = Q.top();
			Q.pop();
			sum += maxx;
			cost += maxx - minx;
			Q.push(sum);
		}

	}
	cout << Q.top()<< endl;
	cout << cost << endl;
}
