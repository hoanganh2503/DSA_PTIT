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
//	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		queue<int> q;
		while(n--){
			cin >> s;	
			if(s == "PUSH"){
				int k; cin >> k;
				q.push(k);				
			}
			else if(s == "PRINTFRONT"){
				if(q.empty()) cout << "NONE" << endl;
				else cout << q.front() << endl;				
			}else{
				if(!q.empty()) q.pop();				
			}
		}
	}
}
