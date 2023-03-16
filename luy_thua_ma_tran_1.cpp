#include<bits/stdc++.h>
#include<queue>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

ll a[10][10], b[10][10];
ll mod = 1e9+7;
int n, k;

void Mul(ll a[10][10], ll b[10][10]) {
	ll tmp[10][10];
	f(i, 0, n-1){
		f(j, 0, n-1){
			ll res = 0;
			f(k, 0, n-1){
				res += (a[i][k]*b[k][j])%mod;
				res %= mod;
			}
			tmp[i][j] = res;
		}
	}
	f(i, 0, n-1){
		f(j, 0, n-1){
			a[i][j] = tmp[i][j];
		}
	}
}

void Pow(ll a[10][10], int n){
	if(n <= 1) return;
	Pow(a, n/2);
	Mul(a, a);
	if(n&1) Mul(a, b);
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		cin >> n >> k;
		f(i, 0, n-1){
			f(j, 0, n-1){
				cin >> a[i][j];
				b[i][j] = a[i][j];
			}
		}
		Pow(a, k);
		f(i, 0, n-1){
			f(j, 0, n-1){
				cout << a[i][j] << ' ';
			}
			cout << endl;
		}
	}
}	
