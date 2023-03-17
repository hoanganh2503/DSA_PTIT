#include<bits/stdc++.h>
#include<string>
#include<vector>
#define ll long long
#define f(i, a, b) for(int i= a ; i <= b ; i++)
#define f_(i, a, b) for(int i = a ; i >= b ; i--)
using namespace std;

int minx = -1e9;

int maxCrossingSum(int *arr, int l, int m, int h) {
	int sum = 0, ls = minx, rs = minx;
	f_(i, m, l) {
		sum += arr[i];
		if(sum > ls) ls = sum;
	}
	sum = 0;
	f(i, m+1, h) {
		sum += arr[i];
		if(sum > rs) rs = sum;
	}
	return max({ls+rs, ls, rs});
}

int maxSubSum(int *arr, int l, int h){
	if(l==h) return arr[l];
	int m = l+(h-l)/2;
	return max({maxSubSum(arr, l, m), maxSubSum(arr, m+1, h), maxCrossingSum(arr, l, m, h)});
}

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		int arr[n];
		f(i, 0, n-1) cin >> arr[i];		
		cout << maxSubSum(arr, 0, n-1) << endl;
	}
}
