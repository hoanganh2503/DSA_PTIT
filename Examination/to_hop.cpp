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

int n, k, arr[1001];
string s;
char str[1001];

void show(){
	f(i, 0, k-1){
		cout << arr[i];
	}
	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		cin >> s >> k;
		n = s.sz;
		int check = 1;
		sort(all(s));
		f(i, 0, n-1) str[i] = s[i], arr[i] = i+1;
		set<string> s1;
		while(check){
			int l = k;
			while(arr[l] == n-k+l) l--;
			if(l){
				arr[l] ++;
				f(j, l+1, k) arr[j] = arr[j-1] + 1;
				show();
			}else check = 0;
		}
		
	}
}
