#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i = a; i <=b ; i++);
#define f_(i, a, b) for(int i = a; i >=b ; i--);

using namespace std;

int n, k, s, arr[1000], dem;

int check1() {
	int sum = 0;
	for(int i = 1 ; i <= k ; i++){
		sum += arr[i];
	}
	return s == sum ? 1 : 0;
}

void Try(int i){
	for(int j = arr[i-1] + 1; j<= n-k+i; j++) {
		arr[i] = j;
		if(i == k){
			if(check1())
			dem ++;
		}else Try(i+1);
	}
}

int main(){
	int check = 1;
	while(check){
		cin >> n >> k >> s;
		if(n == 0 && k == 0 && s == 0){
			check = 0;
		}else {
			dem = 0;
			Try(1);
			cout << dem << endl;
		}
	}
}
