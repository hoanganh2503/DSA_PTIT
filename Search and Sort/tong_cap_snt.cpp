#include<bits/stdc++.h>
#define ll long long
#include <cstring>

using namespace std;
vector<bool> ok(1000007, false);

void sangsnt() {
	ok[0] = ok[1] = true;
	for(ll i = 2 ; i < 1000001 ; i++)
		if(!ok[i])
			for(ll j = i*i ; j < 1000001 ; j+=i)
				ok[j] = true;
			
}

int main(){	
	sangsnt();
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		int arr[n];
		bool test = false;
		for(ll i = 2 ; i < n/2 + 1 ; i ++){
			if(ok[i] == false && ok[n-i] == false){
				cout << i << " " << n-i;
				test = true;
				break;
			}
		}
		if(!test) cout << -1;
		cout << endl;
	}
}
