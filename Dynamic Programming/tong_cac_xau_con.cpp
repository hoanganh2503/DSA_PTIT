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
	int t = 1;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		ll n = s.sz;
		s = "A" + s;
		ll ans = 0;
		f(i, 1, n) ans += s[i] - 48;
		f(len, 2, n){
			f(i, 1, n-len+1){
				string str = "";
				f(j, i, i+len-1){
					str += s[j];
				}
				ll kq = 0;
				f(i, 0, str.sz-1)
					kq = kq*10 + str[i] - 48;
				ans += kq;
			}
		}
		cout << ans << endl;
	}
}
