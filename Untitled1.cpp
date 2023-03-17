#include <iostream>
using namespace std;
int n, arr[1000], k = 1, check = 1;

void show(){
	int l = 0;
	long long s = 0;
	for(int i = 1 ; i <= k ; i++){
		s = s*10 + arr[i];
		if(arr[i] == 1) l++;
	}
	if(l==k) k++;
	if(s % n == 0 && s > 0){
		cout << s;
		check = 0;
	}
	cout << endl;
}

void handle(int i){
		for(int j = 0 ; j <= 1 ; j++){
		arr[i] = j;
		if(i == k){
			show();
		}else handle(i+1);

	}
}

int main() {
	int t;
	cin >> t;
	while(t--){
	    cin >> n;
	    while(check){
		handle(1);	
		}
	}
    return 0;
}
