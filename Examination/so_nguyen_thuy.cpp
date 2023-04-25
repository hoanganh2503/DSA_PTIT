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
vector<string> vt;
queue<string> q;

void init(){
	vt.pb("44");
	vt.pb("55");
	q.push("4");
	q.push("5");
	string s1, s2, top;
	while(vt.sz < 10001){
		top = q.front();
		q.pop();
		s1 = top + '4';
		s2 = top + '5';
		q.push(s1);
		q.push(s2);
		reverse(all(s1));
		vt.pb(top + '4' + s1);
		reverse(all(s2));
		vt.pb(top + '5' + s2);
	}
}

int main() {
	int t = 1;
	cin >> t;
	init();
	while(t--){
		int n;
		cin >> n;
		f(i, 0, n-1) cout << vt[i] << ' ';
		cout << endl; 
	}
}
