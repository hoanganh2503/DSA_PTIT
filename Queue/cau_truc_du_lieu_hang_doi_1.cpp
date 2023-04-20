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
		int n;
		cin >> n;
		queue<int> q;
		while(n--){
			int k;
			cin >> k;
			switch (k) {
				case 1:
					cout << q.sz << endl;
					break;
				case 2:
					if(q.empty()) cout << "YES" << endl;
					else cout << "NO" << endl;
					break;
				case 3:
					int l;
					cin >> l;
					q.push(l);
					break;
				case 4:
					if(!q.empty()) q.pop();
					break;
				case 5:
					if(!q.empty()) cout << q.front() << endl;
					else cout << -1 << endl;
					break;
				case 6:
					if(!q.empty()) cout << q.back() << endl;
					else cout << -1 << endl;
					break;		
			}
		}
	}
}
