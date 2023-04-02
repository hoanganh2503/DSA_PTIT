#include<bits/stdc++.h>
#define ll long long

using namespace std;


int main(){	
	ll n;
	cin >> n;
	ll arr[n], chan[n], le[n], c = 0, l = 0;

	for(ll i = 0 ; i < n; i++){
		cin >> arr[i];
		if(i%2==1) le[l++] = arr[i];
		else chan[c++] = arr[i];
	}
	
	sort(chan, chan+c);
	sort(le, le+l, -1);
	for(int i = 0 ; i < l ; i++) cout << le[i];
//	l = 0; c--;
//	for(ll i = 0 ; i < n ; i++){
//		if(i%2==0) cout << le[c--] << " ";
//		else cout << chan[l++] << " ";
//	}
}
