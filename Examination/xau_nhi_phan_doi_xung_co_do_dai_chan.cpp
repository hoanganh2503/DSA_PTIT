#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;
int n, x[1000], k;

void show(){
	f(i, 1, k){
		cout << x[i];
	}
	for(int i = k ; i >= 1 ; i--) cout << x[i];
	cout << " ";
}

void handle(int i){
	f(j, 0, 1){
		x[i] = j;
		if(i == k){
			show();
		}else handle(i+1);
	}
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		memset(x, 0, sizeof(x));
		cin >> n;
		for(k = 1; k <= n/2 ; k++){
			handle(1);			
		}

		cout << endl;
	}
}
