#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()
#define vi vector<int>

using namespace std;

int main() {
	int n, a;
	cin >> n;
	cin.ignore();
    vector<vector<int>> arr(n + 1, vi(n + 1, 0));
		
	int i = 1;
	while(i <= n){
		do{
			cin >> a;
			arr[i][a] = 1;
		}
		while(getchar() != '\n');
		i++;
	}
		f(i, 1, n){
			f(j, 1, n){
				cout << arr[i][j]<< ' ';
			}
			cout << endl;
		}
}


