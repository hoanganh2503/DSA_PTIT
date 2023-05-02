#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		stack <char> st;
		int max=0;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				st.push(s[i]);
			}
			else{// tuc la luc nay s[i]==')'
				if(!st.empty()){
					max+=2;
					st.pop();
				}
			}	
		}
		cout<<max<<endl;
	}
}