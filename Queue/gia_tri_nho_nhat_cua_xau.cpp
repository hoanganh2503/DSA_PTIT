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
	int t = 1, k;
	cin >> t;
	while(t--){
		priority_queue<ll> q;
		map<char, int> mp;
		string s;
		cin >> k >> s;
		f(i, 0, s.sz-1){
			mp[s[i]] ++;
		}
		for(auto it:mp){
			q.push(it.second);
		}
		while(k--){
			int top = q.top()-1;
			q.pop();
			q.push(top);
		}
		ll ans = 0;
		while(!q.empty()){
			ans += q.top() * q.top();
			q.pop();
		}
		cout << ans << endl;
	}
}
