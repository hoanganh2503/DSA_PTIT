#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()

using namespace std;

void handle(int p, int q) {
	ll z = 0;
	while(true){
		if(q % p == 0){
			cout << "1/" << q/p << endl;
			return;
		}
		z = q/p + 1;
		cout << "1/" << z << " + ";
		p = z*p - q;
		 q*= z;	
	}

}

int main() {
	int t;
	cin >> t;
	while(t--){
		ll p,q;
	    cin >> p >> q;
	    handle(p, q);
	}

}

