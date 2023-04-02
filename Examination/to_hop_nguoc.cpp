#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()

using namespace std;
int n, k, arr[100], c = 0;
map<int, string> mp;

void show(){
	string s = "";
	f(i, 1, k){
		s += to_string(arr[i]) + " ";
	}
	mp[c++] = s;
}

void handle(int i){
	f(j, arr[i-1] + 1 , n - k + i){
		arr[i] = j;
		if(i == k) show();
		else handle(i+1);
	}
}


int main() {
	int t ;
	cin >> t;
	while(t--){
		c = 0;
		mp.clear();
		cin >> n >> k;
		f(i, 1, n) arr[i] = i;
		handle(1);
		f_(i, c-1, 0) cout << mp[i] << endl;
	}
}
