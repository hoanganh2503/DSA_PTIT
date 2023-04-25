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

void show(stack<string> st){
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl;
}

void handle(string s){
	int n = s.sz;
	string ans = "";
	stack<int> st;
	f(i, 0, n-1){
		if(s[i] == '(') st.push(i);
		else {
			if(st.sz and s[i] == ')'){
				s[st.top()] = '0';
				st.pop();
				s[i] = '1';
			}
			else if(!st.sz and s[i] == ')') s[i] = '2';
		}
	}
	while(st.sz){
		s[st.top()] = '2';
		st.pop();
	}
	f(i, 0, n-1){
		if(s[i] == '2') cout << -1;
		else cout << s[i];
	}
	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		handle(s);
	}
}
