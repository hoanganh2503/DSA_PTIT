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
		bool ok = true;
		if(s.sz % 2 == 1) cout << "NO" << endl;
		else{
			f(i, 0, s.sz-1){
				if(s[i] == '[' or s[i] == '{' or s[i] == '(') st.push(s[i]);
				else if(s[i] == ']') {
					if(st.sz == 0) ok = false;
					else if(st.top() == '[') st.pop();
				}
				else if(s[i] == '}') {
					if(st.sz == 0) ok = false;
					else if(st.top() == '{') st.pop();
				}
				else if(s[i] == ')') {
					if(st.sz == 0) ok = false;
					else if(st.top() == '(') st.pop();
				}

				if(ok == false) break;
			}
			if(st.sz > 0) ok = false;
			if(ok) cout << "YES" << endl;
			else cout << "NO" << endl;			
		}
	}
}
