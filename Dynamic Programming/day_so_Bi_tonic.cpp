#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
#define sz size()
#define pb(x) push_back(x)

using namespace std;

ll n, increse[1001], decrese[1001], arr[1001];

void calculater(){
	int imax = 0;
	f(i, 1, n){
		increse[i] = arr[i];
		F(j, 1, i){
			if(arr[i] > arr[j]) increse[i] = max(increse[i], increse[j]+arr[i]);	
		}
//		increse[i] = max(increse[i-1], increse[i]);
	}
	
	f_(i, n, 1){
		decrese[i] = arr[i];
		f_(j, n, i){
			if(arr[i] > arr[j]) decrese[i] = max(decrese[i], decrese[j]+arr[i]);	
		}
//		decrese[i] = max(decrese[i], decrese[i+1]);

	}
//	f(i, 1, n) cout << increse[i] << ' '; cout << endl;
//	f(i, 1, n) cout << decrese[i] << ' '; cout << endl;
	ll maxx = 0;
	f(i, 0, n) {
		maxx = max(maxx, (increse[i] + decrese[i] - arr[i]));
	}
	cout << maxx << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		memset(arr, 0);
		memset(increse, 0);
		memset(decrese, 0);
		cin >> n;
		f(i, 1, n) cin >> arr[i];
		calculater();	
	}
}
