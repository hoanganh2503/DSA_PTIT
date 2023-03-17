#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i = a; i <=b ; i++)
using namespace std;

int n, maxx, XOPT[100], FOPT = 0;
int c[100], a[100], arr[100], kq[100];
int check(){
	int sum = 0, test = 0;
	for(int i = 1 ; i <= n ; i++){
		sum += c[i]*arr[i];
		test += a[i]*arr[i];
	}
	if(sum > FOPT && test <= maxx) {
		FOPT = sum;
		return 1;
	}
	return 0;
}

void Try(int i) {
	for(int j = 0 ; j <= 1 ; j++) {
		arr[i] = j;
		if(i == n) {
			if(check()){
				for(int i = 1 ; i <= n ; i++){
					kq[i] = arr[i];
				}				
			}

		}else{
			Try(i+1);
		}	
	}
}

int main(){
	cin >> n >> maxx;
	f(i, 1, n) cin >> c[i];
	f(i, 1, n) cin >> a[i];
	Try(1);
	cout << FOPT<<endl;
	f(i, 1, n) cout << kq[i] << " ";
	cout << endl;
	
}
