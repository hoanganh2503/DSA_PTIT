#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(ll i = a ; i <= b ; i++)

using namespace std;

void swap(int *a, int *b){
	int tmp ;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int t ;
	cin >> t;
	while(t--){
		int n, count = 0;
		cin >> n;
		int s[n], f[n];
		f(i, 0, n-1) cin >> s[i];
		f(i, 0, n-1) cin >> f[i];
		f(i, 0, n-1){
			f(j, 0, n-i-2){
				if(f[j] > f[j + 1]){
					swap(&f[j], &f[j+1]);
					swap(&s[j], &s[j+1]);
				}
			}
		}
		int i = 0;
		while(i < n) {
			int j = i+1;
			while(f[i] > s[j] && j < n) j++;
			if(j != n){
				i = j;
				count ++;
			}else	
				i = n;
		}
		cout << count + 1<< endl;
	}
}
