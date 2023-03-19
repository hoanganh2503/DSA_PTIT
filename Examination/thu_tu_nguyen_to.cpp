#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

bool ok[100000] = {false};
int n, k, arr[100000];
 
void sangsnt(){
	ok[0] = ok[1] = true;
	f(i, 2, sqrt(1000000)){
		if(!ok[i]){
			for(int j = 2*i ; j <= 100000 ; j+=i)
				ok[j] = true;
		}
	}
}


void khoitao() {
	f(i, 1, n) arr[i] = i;
}

void show(int *arr, int n){
	f(i, 1, n) cout << arr[i] << ' ';
	cout << endl;
}

void generate_combination(){
	khoitao();
	int count = 0;
	bool has_next = true;
	while(has_next){
		count ++;
		if(!ok[count]){
			cout << count <<": ";
			show(arr, k);			
		}
		int i = k;
		while(i >= 0 and arr[i] == n - k + i) i--;
		if(i > 0){
			arr[i] = arr[i]+1;
			f(j, i+1, k) arr[j] = arr[i] + j - i; 
		}else has_next = false;
	}
}

int main() {
	int t = 1;
	while(t--){
		sangsnt();
		cin >> n >> k;
//		f(i, 0, 100){
//			if(!ok[i]) cout << i << endl;
//		}
		generate_combination();
	}
}
