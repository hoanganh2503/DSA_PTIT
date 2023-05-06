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

void show(queue<string> pq){
	while(pq.sz){
		cout << pq.front() << ' ';
		pq.pop();
	}
	cout << endl;
}

int main() {
	queue<string> q;
	queue<string> pq;
	q.push("2357");
	pq.push("2357");
	while(q.front().sz < 11){
		string top = q.front();
		q.pop();
		pq.push(top + "2");
		pq.push(top + "3");
		pq.push(top + "5");
		pq.push(top + "7");
		q.push(top + "2");
		q.push(top + "3");
		q.push(top + "5");
		q.push(top + "7");
	}
	int n;
	cin >> n;
	while(pq.front().sz <= n){
		string str = pq.front();
		pq.pop();
		sort(all(str));
		do{
			if(str[str.sz - 1] != '2') cout << str << endl;
		}while(next_permutation(all(str)));
	}
	
}
