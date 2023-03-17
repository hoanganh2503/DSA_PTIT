#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const int mod = 1e9 + 7;
const int Max = 1e3 + 3;
 
//Copyright of QuangNguyen
//
int n, s, p;
int prime[Max];
int pre_sum = 0;
int cnt = 0;
vector<string> v;
int x[1000];
//
 
void sieve(){
	for(int i = 0; i < Max; i++) prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 0; i < sqrt(Max); i++){
		if(prime[i]){
			for(int j = i * i; j < Max; j += i){
				prime[j] = 0;
			}
		} 
	}
}
 
void result(){
	string s = "";
	for(int i = 1; i < 100; i++){
		if(x[i] != 0){
			s += to_string(x[i]) + " ";
		}
	}
	v.push_back(s);
}
 
void Try(int i, int a){
	for(int j = a + 1; j <= s; j++){
		if(prime[j]){
			x[i] = j;
			pre_sum += j;
			cnt++;
			if(pre_sum == s && cnt == n){
				result();
			} 
			else if(pre_sum <= s && cnt < n){
				Try(i + 1, j);
			}
			x[i] = 0;
			pre_sum -= j;
			cnt--;
		}
	}
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc; cin >> tc;
    sieve();
    while(tc--){
    	cin >> n >> p >> s;
    	Try(1, p);
    	cout << v.size() << '\n';
    	for(string x : v) cout << x << '\n';
    	v.clear();
    }
}
