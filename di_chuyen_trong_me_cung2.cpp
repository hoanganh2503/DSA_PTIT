#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int n, a[100][100];
vector<string> res;
bool check[100][100];

void Try(int i, int j, string s = "")
{
    if(!a[1][1] or !a[n][n]) return;
    if(i == n && j == n)
    {
        res.push_back(s);
        return;
    }
    if(a[i + 1][j] and i != n and !check[i + 1][j])
    {
        check[i][j] = 1;
        Try(i + 1, j, s + "D");
        check[i][j] = 0;
    }
    if(a[i][j - 1] and j != 1 and !check[i][j - 1])
    {
        check[i][j] = 1;
        Try(i, j - 1, s + "L");
        check[i][j] = 0;
    }
    if(a[i][j + 1] and j != n and !check[i][j + 1])
    {
        check[i][j] = 1;
        Try(i, j + 1, s + "R");
        check[i][j] = 0;
    }
    if(a[i - 1][j] and i != 1 and !check[i - 1][j])
    {
        check[i][j] = 1;
        Try(i - 1, j, s + "U");
        check[i][j] = 0;
    }
}

int main() {
	int t;
	cin >> t;
	while(t--){
		res.clear();
		cin >> n;
		f(i, 1, n){
			f(j, 1, n){
				check[i][j] = false;
				cin >> a[i][j];
			}
		}
		Try(1, 1,"");
		if(res.empty()) cout << -1;
		else{
			for(auto i:res) cout << i << ' ';
		}
		cout << endl;
	}
}
