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

int value(char c){
	if(c == '^') return 5;
	if(c == '*' or c == '/') return 4;
	if(c == '+' or c == '-') return 3;
	return 2;
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		string s, ans = "";
		cin >> s;
		stack<char> st;
		f(i, 0, s.sz-1){
			if(isalpha(s[i])) ans += s[i];
			else if(s[i] == '(') st.push(s[i]);
			else if(s[i] == ')'){
				while(st.sz and st.top() != '('){
					ans+=st.top();
					st.pop();
				}
				st.pop();
			}
			else if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/' or s[i] == '^'){
				while(st.sz and value(st.top()) >= value(s[i])){
					ans += st.top();
					st.pop();
				}
				st.push(s[i]);
			} 
		}
					
		while(st.sz){
			if(st.top() != '(' ) ans += st.top();
			st.pop();
		}
		cout << ans << endl;
	}
}
