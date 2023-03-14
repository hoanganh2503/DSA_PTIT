#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

inline bool cmp(pair<int, int> a, pair<int, int> b){
	return a.second < b.second;
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n, count = 0, last = 0;
		cin >> n;
		vector<pair<int, int>> p(n);
		f(i, 0, n-1) cin >> p[i].first >> p[i].second;
		sort(all(p), cmp);
		for(auto i:p) {
			if(i.first < last) continue;
			count++;
			last = i.second;
		}
		cout << count << endl;
	}
}
