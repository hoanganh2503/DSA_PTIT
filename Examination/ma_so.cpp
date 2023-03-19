#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;
int n, arr[100], check;

void generate(){
	int i = n;
	while(i >= 1 and arr[i] == n) i--;
	if(i == 0){
		check = 0;
	}
	else{
		arr[i]++;
		f(j, i+1, n) arr[j] = 1;
	}
}

void init(){
	f(i, 1, n) arr[i] = 1;
}

int main(){
	vector<string> vt;
	vector<string> vt2;
	cin >> n;
	char c = 'A';
	string str = "A";
	f(i, 1, n-1){
		c++;
		str = str + c;
	}
	
	vt.push_back(str);
	while(next_permutation(all(str))){
		vt.push_back(str);
	}
	
	init();
	check = 1;
	while(check == 1){
		string s = "";
		f(i, 1, n) s = s + to_string(arr[i]);
		vt2.push_back(s);
		generate();
	}
	
	for(auto i:vt){
		for(auto j:vt2){
			cout <<  i << j << endl;
		}
	}
	
}

