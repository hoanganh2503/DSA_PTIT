#include<bits/stdc++.h>
#include<vector>
#define ll long long

using namespace std;

int main() {
	int t ;
	cin >> t;
	int arr[10] = { 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};
	while(t--){
		int count = 0;
		int n, i = 9;
		cin >> n;
		while(n) {
			while(n>=arr[i]){
				n-=arr[i];
				count ++;
			}
			i--;
		}
		cout << count <<endl;
	}
}
