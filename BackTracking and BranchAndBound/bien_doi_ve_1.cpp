#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n, k=1, count = 0;
		cin >> n;
		while(1) {
			while(k <= n/3){
				count++;
				k*=3;
			} 
			while(k <= n/2){
				count++;
				k*=2;
			}
			while(k < n) {
				count++;
				k++;
			}
			break;
		}
		cout << count << endl;
	}
}
