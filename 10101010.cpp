#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

ll fibonaci[51];
ll cnt[51];
int n, k;
		
void kt(){
	cnt[0]=0;
	cnt[1]=1;
	fibonaci[0]=1;
	fibonaci[1]=1;
	f(i, 2, 50) {
		fibonaci[i] = fibonaci[i-1] + fibonaci[i-2];
		cnt[i] = cnt[i-1]+cnt[i-2];
	}
}

int handle(int n, int k){
	if(n== 0) return 1;
	if(n==1) return 0;
	if(k <= fibonaci[n-2]){
		return handle(n-2, k);
	}else return cnt[n-1] + handle(n-2, k-fibonaci[n]);
}

int main() {
	kt();
	int t ;
	cin >> t;
	while(t--){
		cin >> n >>  k;
		cout << handle(n, k) << endl;
	}
}
