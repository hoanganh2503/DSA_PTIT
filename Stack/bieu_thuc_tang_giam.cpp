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

void handle(){
	stack<int> st;
	string ans = "";
    for(int i = 0; i <= s.sz; ++i)
    {
        st.push(i + 1);
        if (i == s.sz or s[i] == 'I')
        {
            while(!st.empty())
            {
                stringstream ss;
                string tmp;
                ss << st.top();
                ss >> tmp;
                ans += to_string(st.top());
                st.pop();
            }
        }
    }
    cout << ans << endl;
}
int main() {
	int t ;
	cin >> t;
	while(t--){
		cin >> s;
		handle();
	}
}
