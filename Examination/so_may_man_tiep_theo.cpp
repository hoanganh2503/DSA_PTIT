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
queue<ll> q;
vector<ll> vt;

void init(){
	q.push(4);
	q.push(7);
	vt.pb(4);
	vt.pb(7);
	while(q.front() < 1e9 + 1){
		ll maxx = q.front();
		q.pop();
		q.push( maxx * 10 + 4);
		q.push( maxx * 10 + 7);
		vt.pb(maxx * 10 + 4);
		vt.pb(maxx * 10 + 7);
	}
}

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		init();
		int a, b;
		cin >> a >> b;
		if(a > b) swap (a, b);
		ll k = 0;
		ll ans = 0;
		f(i, a, b){
			while(i > vt[k]) k++;
			ans += vt[k];
		}
		cout << ans;
	}
}
