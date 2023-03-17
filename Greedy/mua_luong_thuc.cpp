#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int n, s, m;

int main() {
	int t ;
	cin >> t;
	while(t--){
		cin >> n >> s >> m;
		if((n<m && s <7)|| (6*n < 7*m && s >= 7)) cout << -1 << endl;
		else{
			int count = 0, k = 0, du = 0;
            k = m*s/n;
            count = k;
            if((m*s)%n != 0)
			count ++;
			cout << count << endl;
		}
	}
}
