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

void show(queue<ll> q){
	while(!q.empty()){
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;
}

void handle(int n){
	ll limit = pow(10, n);
	queue<ll> q1 = queue<ll>();
	q1.push(6);
	q1.push(8);
	ll dem = 2;
	ll arr[100000] = {0};
	arr[0] = 6, arr[1] = 8;
	while(1){
			ll top  = q1.front();
			if(10*top +8 > limit) break;	
			q1.pop();
			q1.push(10*top + 6);
			arr[dem++] = 10*top + 6;
			q1.push(10*top + 8);
			arr[dem++] = 10*top + 8;
	}
	f_(i, dem-1, 0) cout << arr[i] <<' ';
	cout << endl;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		handle(n);
	}
}