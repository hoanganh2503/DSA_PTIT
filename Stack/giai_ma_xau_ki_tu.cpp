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

bool isCheck(string s){
	if(s <= "9" and s >= "0") return true;
	return false;
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		string s, ans = "", res;
		cin >> s;
		stack<string> st;
		f(i, 0, s.sz-1){
			if(s[i] != ']') st.push(string(1, s[i]));
			else{
				ans = "", res = "";
				string str[100];
				int cnt = 0;
				while(!st.empty() and st.top() != "[") {
					str[cnt++] = st.top();
					st.pop();
				}
				st.pop();
				f_(i, cnt-1, 0) ans += str[i];
				int to = 0;
				if(!st.empty()){
					if(isCheck(st.top())){
						string f = "";
						while(!st.empty() and isCheck(st.top())) {
							string top = (st.top());
							f += top;
							st.pop();							
						}
						reverse(all(f));
						to = stoi(f);							
					}else to = 1;
				}else to = 1;
				f(l, 1, to) res+=ans;
//				cout << res << ' ';
				st.push(res);
			} 
		}
		string asdjfajs = ""; int dem = 0;
		string scsndjns[1000];
		while(!st.empty()){
			scsndjns[dem++] = st.top();
			st.pop();
		}
		f_(i, dem-1, 0) cout << scsndjns[i];
		cout << endl;
	}
}