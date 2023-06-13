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

struct students{
	string name1, name2, dau;
};

vector<students> vt;
map<string, int> mp;
int check1(vector<students> vt){
	for(auto it:vt){
		string name1 = it.name1, s2 = it.dau, name2 = it.name2;
		cout << mp[name1] << ' ' << mp[name2] << endl;
		if(!mp[name1] and !mp[name2]){
			if(s2 == ">"){
				mp[name1] = 10001;
				mp[name2] = 10000;
			}
			else{
				mp[name1] = 10000;
				mp[name2] = 10001;				
			}
		}
		if(!mp[name1] and mp[name2]){
			if(s2 == ">"){
				mp[name1] = mp[name2] + 1;
			}
			else{
				mp[name1] = mp[name2] - 1;				
			}
		}
		if(mp[name1] and !mp[name2]){
			if(s2 == ">"){
				mp[name2] = mp[name1] - 1;
			}
			else{
				mp[name2] = mp[name1] + 1;				
			}
		}
		if(mp[name1] and mp[name2]){
			if(mp[name1] > mp[name2] and s2 == "<") return 0;
			if(mp[name1] < mp[name2] and s2 == ">") return 0;
		}
		
	}
	return 1;
}

int main() {
	int t = 1;
	cin >> t;
	int check = 1;
	while(t--){
		string s1, s2, s3;
		cin >> s1 >> s2 >> s3;
		students s;
		s.name1 = s1, s.dau = s2, s.name2 = s2;
		vt.push_back(s);
	}
	if(check1(vt)) cout << "possible\n";
	else cout << "impossible\n";
}
