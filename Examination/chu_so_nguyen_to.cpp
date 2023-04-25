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
int digit[12] = {2, 3, 5, 7, 2, 3, 5, 7, 2, 3, 5, 7};

int main() {
	priority_queue<string> q;
	priority_queue<string> pq;
	q.push("2357");
	pq.push("2357");
	while((q.top()).sz < 10){
		string top = q.top();
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
	while(pq.sz){
		cout << pq.top() << ' ';
		pq.pop();
	}
	
}
