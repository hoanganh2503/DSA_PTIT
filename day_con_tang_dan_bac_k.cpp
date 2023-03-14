#include<bits/stdc++.h>
#include<vector>
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL); cout.tie(NULL);
#define all(x) (x).begin(), (x).end()

using namespace std;

int n, k, arr[35];
vector<vector<int>> vec;
vector<int> v;

  void add_string() {
	vector<int> s ;
	for(int &i:v) s.push_back(i);
	vec.push_back(s);
}

 void Try(int i) {
	for(int j = i+1 ; j <= n ; j++) {
		if(arr[j] > arr[i]){
			v.push_back(arr[j]);
			if(v.size() > 1)
				add_string();
			Try(j);
			v.pop_back();
		}
	}
}

int main(){
	faster();
	cin >> n >> k;
	int count = 0;
	for(int i = 1 ; i <= n ; i++) cin >> arr[i];
	Try(0);
	sort(all(vec));
	int length = vec.size();
	for(int i = 0 ; i < length ; i++){
		int col = vec[i].size();
		if(col == k) count ++;
	}
	cout << count << endl;

}
