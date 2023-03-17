#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll maxIndexDiff(ll arr[], ll n)
{
	// khoi tao mang moi chua toan gia tri max cua arr
	ll rightMax[n];
	rightMax[n-1] = arr[n-1];
	for(ll i = n-2 ; i >= 0 ; i--) {
		rightMax[i] = max(rightMax[i+1], arr[i]);
	} 
	ll ans_max = -1e9;
	ll i = 0, j = 0;
	
	while(i < n && j < n) {
		if(rightMax[j] >= arr[i] && (arr[i] != arr[i+1])){
			ans_max = max(ans_max, j-i);
			j++;
		}
		else i++;
	}
	return ans_max ? ans_max : -1;
}

int main(){
	int t;
	cin >> t;
	ll n;
	while(t--){
		cin >> n;
		ll arr[n];
		for(ll i = 0 ; i < n ; i++) cin >> arr[i];
		cout << maxIndexDiff(arr, n) << endl;
	}
}
