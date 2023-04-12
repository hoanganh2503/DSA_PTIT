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
	string s;
	stack<ll> st;
	while(cin >> s){
		if(s == "push"){
			int n;
			cin >> n;
			cin.ignore();
			st.push(n);
		}
		else if( s == "pop"){
			st.pop();
		}
		else {
			stack<ll> st1 = st;
			ll arr[st1.sz], l=0;
			while(!st1.empty()){
				arr[l++] = st1.top();
				st1.pop();
			}
			f_(i, l-1, 0) cout << arr[i] << ' ';
			cout << endl;
		}
		if(st.empty()){
			cout << "empty";
			break;
		}
	}
}
