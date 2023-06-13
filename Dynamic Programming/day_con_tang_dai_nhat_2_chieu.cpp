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
	ll n;
	cin >> n;
	vector<pair<ll, ll>> vt;
	ll increase[n+1], decrease[n+1];
	f(i, 1, n){
		int a, b;
		cin >> a >> b;
		vt.push_back({a, b});
	}
	ll ans = 0;
	increase[0] = 1;
	f(i, 1, n-1){
//		cout << vt[i].first << ' ' << vt[i].second<<endl;
//		cout << vt[i-1].first << ' ' << vt[i-1].second<<endl<<endl;
		if(vt[i].first > vt[i-1].first and vt[i].second > vt[i-1].second) increase[i] = increase[i-1] + 1;
		else{
			if(( (vt[i].first == vt[i-1].first or vt[i].second == vt[i-1].second) and vt[i] > vt[i-1])
				 or (abs(vt[i].first) > abs(vt[i-1].first) and abs(vt[i].second) > abs(vt[i-1].second)) ) swap(vt[i], vt[i-1]);
			increase[i] = increase[i-1];	
		} 
	}
//	f(i, 0, n-1) cout << vt[i].first << ' '  << vt[i].second << endl;
//	f(i, 0, n-1) cout << increase[i];
	cout << increase[n-1] << endl;
}
