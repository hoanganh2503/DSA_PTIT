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
	queue<ll> q1 = queue<ll>();
	q1.push(1);
	int dem = 1;
	cout << 1 << ' ';
	while(1){
			ll top  = q1.front();
			q1.pop();
			cout << 10*top + 0 << ' ';
			q1.push(10*top + 0);
			if(++dem == n) break;
			cout << 10*top + 1 << ' ';
			q1.push(10*top + 1);
			if(++dem == n) break;	
	}
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