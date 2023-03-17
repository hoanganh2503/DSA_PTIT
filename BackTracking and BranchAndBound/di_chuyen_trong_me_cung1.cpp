#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int n, arr[100][100];
vector<string> str;
bool check = false;

void Try(int i, int j, string s){
	if(i == 1 && j == 1 && arr[i][j] == 0){
		check = false;
		return;
	}
	if(i==n && j==n && arr[i][j] == 1){
		str.push_back(s);
		check=true;
		return;
	}
	if(i < n && arr[i+1][j]==1){
		Try(i+1, j, s+"D");		
	}
	if(j < n && arr[i][j+1]==1){
		Try(i, j+1, s+"R");		
	}
	if(i < n && j < n && !arr[i][j+1] && !arr[i+1][j] || i > n || j > n)
	return ;
}

int main() {
	int t;
	cin >> t;
	while(t--){
		str.clear();
		cin >> n;
		check = false;
		f(i, 1, n){
			f(j, 1, n){
				cin >> arr[i][j];
			}
		}
		Try(1, 1,"");
		if(!check) cout << -1;
		else{
			all(str);
			for(auto i:str) cout << i << ' ';
		}
		cout << endl;
	}
}
