#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

ll b[2][2] = {{1, 1}, {1, 0}};
ll a[2][2] = {{1, 1}, {1, 0}};
ll mod = 1e9+7;
int n;

void Mul(ll a[2][2], ll b[2][2]) {
	ll tmp[2][2];

	f(i, 0, 1){
		f(j, 0, 1){
			ll res = 0;
			f(k, 0, 1){
				res+=a[i][k] * b[k][j];
				res%=mod;
			}
			tmp[i][j] = res;
		}
	}
	f(i, 0, 1){
		f(j, 0, 1){
			a[i][j] = tmp[i][j];
		}
	}
	
}

void Pow(ll a[2][2], int n){
		if(n <= 1) return;
		Pow(a, n/2);
		Mul(a, a);
		if(n&1) Mul(a, b);
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		cin >> n;
		a[0][0] = a[0][1] = a[1][0] = 1;
		a[1][1] = 0;
		Pow(a, n);
		cout << a[0][1] << endl;
	}
}	
