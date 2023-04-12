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
	string s;
	stack<ll> st;
	int t;
	cin >> t;
	while(t--){
		cin >> s;
		if(s == "PUSH"){
			int n;
			cin >> n;
			cin.ignore();
			st.push(n);
		}
		else if( s == "POP"){
		    if(!st.empty())
			st.pop();
			else continue;
		}
		else if( s == "PRINT"){
			if(!st.empty())
			cout << st.top() << endl;
			else cout << "NONE" << endl;
		}
	}
}