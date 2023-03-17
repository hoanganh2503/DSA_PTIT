#include<bits/stdc++.h>
#define ll long long
#define f(i, a, b) for(int i = a ; i <= b ; i++)
using namespace std;

int main(){
	int n, k, count = 0;
	cin >> n >> k;
	int arr[n][n], a[n];
	map<int, string> mp;
	f(i, 0, n-1){
		f(j, 0, n-1){
			cin >> arr[i][j];
		}
	}
	f(i, 0, n-1) a[i] = i;
	do{
		int sum = 0;
		f(i, 0, n-1){
			sum += arr[i][a[i]];
		}
		if(sum == k){
			string s = "";			
			f(i, 0, n-1){

			s+= to_string(a[i]+1) + " ";				
			}
			mp[count++] = s;
		}

	}while(next_permutation(a, a+n));
	cout << count <<endl;
	f(i, 0, count-1) cout << mp[i] << endl;
	
}
