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
ll ugly[10001];

void UGLY(){
	ugly[0] = 1;
	int cnt2 = 0, cnt3 = 0, cnt5 = 0, cnt = 1;
	while(cnt < 10002){
		ll top = min(ugly[cnt2] * 2, min(ugly[cnt3] * 3, ugly[cnt5] * 5));
		ugly[cnt++] = top;
		if( top == ugly[cnt2] * 2) cnt2++;
		if(top == ugly[cnt3] * 3) cnt3++;
		if(top == ugly[cnt5] * 5) cnt5++;
	}
}

int main() {
	int t = 1, n;
	cin >> t;
	UGLY();
		while(t--){
			cin >> n;
			cout << ugly[n-1] << endl;
		}
}
