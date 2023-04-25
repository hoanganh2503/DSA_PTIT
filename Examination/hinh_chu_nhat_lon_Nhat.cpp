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
int n, m;
int top = 0;

int maxRow(int *row){
	stack<int> st;
	int top_value;
	int max_area = 0;
	int area = 0, i = 0;
	while(i < n){
		if(st.empty() or row[st.top()] <= row[i]) st.push(i++);
		else{
			top_value = row[st.top()];
			st.pop();
			area = top_value * i;
			if(!st.empty()){
				area = top_value * (i - st.top() -1);
			}
			max_area = max(area, max_area);
		}
	}
	
	while(st.sz){
		top_value = row[st.top()];
		st.pop();
		area = top_value * i;
		if(st.sz){

		area = top_value * ( i - st.top() - 1);	
		}
		if(area > max_area){
		max_area = max(area, max_area);
				if(st.sz)	{
					top = top_value;
				};
						
		}
	}
	return max_area;
}

void handle(int arr[501][501]){
	int ans = maxRow(arr[0]);
	f(i, 1, n-1){
		f(j, 0, m-1){
			if(arr[i][j]) arr[i][j] += arr[i-1][j];
		}
		ans = max(ans, maxRow(arr[i])) ;
	}
	cout << top << ' ' << ans /top << endl;
}



int main() {
	int t = 1;
	cin >> t;
	int arr[501][501];
	while(t--){
		cin >> n >> m;
		f(i, 0, n-1){
			f(j, 0, m-1) cin >> arr[i][j];
		}
		handle(arr);
	}
}