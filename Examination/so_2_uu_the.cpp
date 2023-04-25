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
queue<string> q;
const int maxx = 1e3;
vector<string> vt;

int check(string str){
	int cnt = 0;
	for(char &i : str) cnt += i == '2';
	return cnt > (str.sz >> 1);
}

void init(){
	q.push("1");
	q.push("2");
	string str;
	while(vt.sz < maxx){
		str = q.front();
		q.pop();
		if(check(str)) vt.pb(str);
		for(char c = '0'; c <= '2'; c++) q.push(str + c);
	}
}

int main() {
	init();
	int t = 1, n;
	cin >> t;
	while(t--){
		cin >> n;
		f(i, 0, n-1) cout << vt[i] << ' ';
		cout << endl;
	}
}
