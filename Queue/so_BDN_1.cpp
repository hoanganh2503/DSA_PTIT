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

void show(queue<ll> q){
	while(!q.empty()){
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int length = s.sz-1;
		int k = 0;
		while(1){
			if(s[k] >= '2'){
				break;
			}
			k++;
		}
		f(i, k, length) s[i] = '1';
		ll ans = 0, l = 0;
		f_(i, length , 0){
			ans += (s[i] - 48)*pow(2, l++);
		}
		cout << ans << endl;
	}
}