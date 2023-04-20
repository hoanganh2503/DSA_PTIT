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
void show(queue<int> q){
	while(!q.empty()){
		cout << q.front() << ' ';
		q.pop();
	}
	cout << endl;
}

int main() {
	int t = 1;
//	cin >> t;
	while(t--){
		int n;
		cin >> n;
		string s;
		deque<int> dq;
		while(cin >> s){
		    cin >> s;
			if(s == "PUSHBACK")
        {
            cin >> t;
            dq.push_back(t);
        }
        else if(s == "PUSHFRONT")
        {
            cin >> t;
            dq.push_front(t);
        }
        else if(s == "PRINTFRONT")
        {
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.front() << endl;
        }
        else if(s == "POPFRONT" and dq.sz) dq.pop_front();
        else if(s == "PRINTBACK")
        {
            if(dq.empty()) cout << "NONE\n";
            else cout << dq.back() << endl;
        }
        else if(s == "POPBACK" and dq.sz) dq.pop_back();
		
		}
	}
}