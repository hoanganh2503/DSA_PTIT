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

void show(stack<char> st){
	stack<char> st2 = st;
	while(!st2.empty()){
		cout << st2.top();
		st2.pop();
	}
	cout << endl;
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<char> st;
		int ans = 0;
		f(i, 0, s.sz-1){
			if(s[i] == ')'){
				if(!st.empty()) st.pop();
				else st.push(s[i]), ans++;
				
			}else st.push(s[i]);
		}
		cout << ans + st.size()/2 << endl;
	}
}