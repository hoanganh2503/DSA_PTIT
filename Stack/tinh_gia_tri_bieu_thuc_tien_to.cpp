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
	int t ;
	cin >> t;
	while(t--){
		int ans = 0;
		stack<string> st;
		string s;
		cin >> s;
		f_(i, s.sz-1, 0){
			if(s[i] == '+' or s[i] == '-' or s[i] == '*' or s[i] == '/'){
				string fi = st.top(); st.pop();
				string se = st.top(); st.pop();
				int kq;
				switch (s[i]){
					case '+':
						kq = stoi(se) + stoi(fi);
						break;	
					case '-':
						kq = stoi(fi) - stoi(se);
						break;	
					case '*':
						kq = stoi(se) * stoi(fi);
						break;
					case '/':
						kq = stoi(fi) / stoi(se);
						break;						
				}
			st.push(to_string(kq));
			}else st.push(string(1, s[i]));
		}
		cout << st.top() << endl;
	}
}
