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

struct jobs{
	int dead, profit;
};

inline int cmp(jobs a, jobs b){
	return a.profit != b.profit ? a.profit > b.profit : a.dead < b.dead;
}

int main() {
	int t = 1;
	cin >> t;
	while(t--){
		int d = 0, n, ans = 0;
		vector<jobs> cv;
		cin >> n;
		f(i, 1, n){
			int a, b, c;
			jobs job;
			cin >> a >> b >> c;
			job.dead = b;
			job.profit = c;
			cv.push_back(job);
		}
		sort(all(cv), cmp);
		bitset<1005> bs;
//		for(auto it : cv){
//			cout << it.dead << ' ' << it.profit<<endl;
//		}
		
		for(auto it : cv){
			while(bs[it.dead] and it.dead) it.dead--;
			if(!bs[it.dead] and it.dead){
				ans += it.profit;
				d++;	
				bs[it.dead] = 1;			
			}

		}
			cout << d << ' ' << ans << endl;
	}
}
