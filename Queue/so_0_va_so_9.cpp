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
	queue<ll> q = queue<ll>();
	q.push(9);
	if( 9%n == 0) {
		cout << 9 << endl;
		return;
	}
	while(1){
			ll top  = q.front();
			q.pop();
			
			if( (10*top + 0) % n == 0) {
				cout << 10*top + 0 << endl;
				break;
			}
			else q.push(10*top);
			
			if( (10*top + 9) % n == 0) {
				cout << 10*top + 9 << endl;
				break;
			}
			else q.push(10*top + 9);
	}
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