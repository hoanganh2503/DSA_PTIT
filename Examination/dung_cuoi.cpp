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
int n;
vector<string> vt;
string str;

int main() {
	cin >> n;
	f(i, 1, n){
		string s;
		cin >> s;
		vt.pb(s);
	}
	cin >> str;
	sort(all(vt));
	do{
		if(vt[n-1] == str){
			for(auto it:vt) cout << it << ' ';
			cout << endl;			
		}

	}while(next_permutation(all(vt)));
}
