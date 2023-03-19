#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		sort(all(s));
		do{
			f(i, 0, s.length()-1){
				if(i == 0 && s[i] == '0') continue;
				cout << s[i];
			}		
			cout << endl;	
		}while(next_permutation(all(s)));
	}
}
