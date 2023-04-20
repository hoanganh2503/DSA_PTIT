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
	stack<char> st1 = st;
	while(!st1.empty()){
		cout << st1.top() << ' ';
		st1.pop();
	}
	cout << endl;
}

int main() {
	int t ;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		bool check = true;
		stack<char> st;
		getline(cin, s);
		f(i, 0, s.sz - 1){
			if(s[i] == ')'){
			 	check = true;
			 	char top = st.top();
			 	st.pop();
			 	while(top != '('){
					if(top == '+' or top =='-' or top == '*' or top == '/')
						check = false;
					top = st.top();	
					st.pop();	 		
				 }
//				 cout << check <<  ' ';
//				 show(st);
				 if(check) break;
			}else st.push(s[i]);
		}      
		if(check) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}
