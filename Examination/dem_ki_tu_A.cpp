#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

ll fibo[92], dem[92];

int handle(int n, int k){
	if(n==0) return 1;
	if(n==1) return 0;
	if(k <= fibo[n-1]) return handle(n-1, k);
	else return dem[n-1] + handle(n-2, k-fibo[n-1]);
}

void khoitao(){
	dem[0] = fibo[0] = fibo[1] = 1;
	dem[1] = 0;
	f(i, 2, 90) fibo[i] = fibo[i-1] + fibo[i-2], dem[i] = dem[i-1] + dem[i-2];
}

int main() {
	int t;
	cin >> t;
	while(t--){
		khoitao();
		int n, k;
		cin >> n >> k;
		cout << handle(n, k) << endl;
//		cout << n << ' ' << dem[n] << endl;
	}
}
