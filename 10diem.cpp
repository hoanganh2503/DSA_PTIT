#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

bool sum_divisor(ll n){
	ll sum = 0;
	f(i, 1, n-1){
		if(n % i == 0)
			sum += i;
	}	
	return sum > n ? true : false;
}

int main() {
	int t = 1;
	while(t--){
		ll a, b, count = 0;
		cin >> a >> b;
		f(i, a, b){
			if(sum_divisor(i))
				count ++;
		}
		cout << count ;
	}
}
