#include<bits/stdc++.h>
using namespace std;

int n, k;
char arr[1005];
char c;

void Try(int i, char h) {
	for(char j = h ; j <= c ; j++) {
		arr[i] = j;
		if(i == k ){
			for(int l = 1 ; l <= k ; l++)
				cout << arr[l];
			cout << endl;
		}else Try(i+1, j);
	}
}

int main() {
		cin >> c >> k;
		Try(1, 'A');

}
