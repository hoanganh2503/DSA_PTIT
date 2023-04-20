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
string s;

void show(stack<char> st){
	stack<char> st2 = st;
	char c[st2.sz];
	int cnt = 0;
	while(!st2.empty()){
		c[cnt++] = st2.top();
		st2.pop();
	}
	f_(i, cnt-1, 0) cout << c[i];
	cout << endl;
}

void handle(){
	stack<char> st = stack<char>();
	f(i, 0, s.sz-1){
		int k = i;
		if(s[i] != ')') st.push(s[i]);
		else{
			char c[1000];
			int cnt = 0;
			while(!st.empty() and st.top() != '('){
				c[cnt++] = st.top();
				st.pop();
			}
			st.pop();
			while(!st.empty() and st.top() == '(' and s[k+1] == ')'){
				st.pop();
				k++;
			}

			if(cnt != 0){
				char top = st.empty() ? '+' : st.top();
				if(top == '-'){
					f_(j, cnt-1, 0){
						if(c[j] == '-') st.push('+');
						else if(c[j] == '+') st.push('-');
						else st.push(c[j]);
					}
				}else{
					f_(j, cnt-1, 0) st.push(c[j]);
				}				
			}

		}
		i = k;
	} 
	show(st);
                    
}
                   
int main() {
	int t ;
	cin >> t;
	while(t--){
		cin >> s;
		handle();
	}
}
