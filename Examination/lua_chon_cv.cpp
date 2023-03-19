#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

inline bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		vector<pair<int, int>> vt(n);
		f(i, 0, n-1) cin >> vt[i].first >> vt[i].second;

		sort(all(vt), cmp);
		map<int, int> mp;
		for(auto i:vt){
			mp[i.first] = i.second;
		}
		ll ans = 0;
		for(auto i:mp){
			ans += i.second;
		}
		cout << ans;
	}
}
