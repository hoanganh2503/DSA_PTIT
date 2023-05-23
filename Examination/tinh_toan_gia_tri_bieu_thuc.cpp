#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i = a ; i <= b ; i++)
#define F(i, a, b) for(int i = a ; i < b ; i++)
#define f_(i, a, b) for(int i = a ; i >= b ; i--)
#define all(x) x.begin(), x.end()
#define memset(arr, x) memset(arr, x, sizeof(arr))
#define sz size()
#define pb(x) push_back(x)
using namespace std;
const ll mod = 1e9 + 7;

int main(){
	int t = 1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string str[n];
		f(i, 0, n-1) cin >> str[i];
		stack<ll> st;
		
		if(str[0] == "+" or str[0] == "-" or str[0] == "*" or str[0] == "/"){
			f_(i, n-1, 0){
				if(str[i] == "+" or str[i] == "-" or str[i] == "*" or str[i] == "/"){
					ll s1 = (st.top()); st.pop();
					ll s2 = (st.top()); st.pop();
					if(str[i] == "+"){
						ll s3 = s1 + s2;
						st.push(s3);
					}
					if(str[i] == "-"){
						ll s3 = s1 - s2;
						st.push(s3);
					}
					if(str[i] == "*"){
						ll s3 = s1 * s2;
						st.push(s3);
					}
					if(str[i] == "/"){
						ll s3 = s1 / s2;
						st.push(s3);
					}
				}else st.push(stoi(str[i]));
			}
			cout << st.top()<<endl;		
		}
		else{
			f(i, 0, n-1){
				if(str[i] == "+" or str[i] == "-" or str[i] == "*" or str[i] == "/"){
					ll s2 = (st.top()); st.pop();
					ll s1 = (st.top()); st.pop();
					if(str[i] == "+"){
						ll s3 = s1 + s2;
						st.push(s3);
					}
					if(str[i] == "-"){
						ll s3 = s1 - s2;
						st.push(s3);
					}
					if(str[i] == "*"){
						ll s3 = s1 * s2;
						st.push(s3);
					}
					if(str[i] == "/"){
						ll s3 = s1 / s2;
						st.push(s3);
					}
				}else st.push(stoi(str[i]));
			}	
			cout << st.top() << endl;		
		}
		
		
	}
}