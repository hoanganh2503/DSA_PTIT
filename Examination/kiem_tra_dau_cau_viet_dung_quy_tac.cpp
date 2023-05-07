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

void show(queue<string> pq){
	while(pq.sz){
		cout << pq.front() << ' ';
		pq.pop();
	}
	cout << endl;
}

int handle(string str){
	
	stack<char> st = stack<char>();
	f(i, 0, str.sz - 1){
		if(str[i] == '(' or str[i] == '[') st.push(str[i]);
		else if(str[i] == ')'){
			if(st.empty()) return 0;
			char top = st.top();
			if(top == '(') st.pop();
			else return 0;
		}
		else if(str[i] == ']'){
			if(st.empty()) return 0;
			char top = st.top();
			if(top == '[') st.pop();
			else return 0;
		}
	}
	if(!st.empty()) return 0;
	return 1;
}

int main() {
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		
		string s;
		getline(cin, s);
		if(handle(s)) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	
}
