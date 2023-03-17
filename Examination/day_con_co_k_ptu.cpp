#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;
int a[100], arr[100], n, k;
vector<string> vt;

void khoitao() {
	f(i, 1, n) arr[i] = i;
}

void show(){
	string s = "";
	f(i, 1, n) s += to_string(arr[i]) + " ";
	vt.push_back(s);
}

void generate_combination(){
	khoitao();
	bool has_next = true;
	while(has_next){
		show();
		int i = k;
		while(i >= 0 and arr[i] == n - k + i) i--;
		if(i >= 0){
			arr[i] = arr[i]+1;
			f(j, i+1, k) arr[j] = arr[i] + j - i; 
		}else has_next = false;
	}
}

int main() {
	cin >> n >> k;
	f(i, 1, n) cin >> a[i];
	sort(a, a+n);
	generate_combination();
	sort(all(vt));
	for(auto i : vt) cout << i << endl;
	

}
