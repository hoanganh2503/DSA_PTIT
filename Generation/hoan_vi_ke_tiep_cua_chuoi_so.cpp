#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		string arr;
		int index;
		cin >> index >> arr;
		int n = arr.size();
		cout << index << ' ';
		if(next_permutation(arr.begin(), arr.end())) {
			cout << arr;
		}
		else cout << "BIGGEST";
		cout << endl;
	}
}

