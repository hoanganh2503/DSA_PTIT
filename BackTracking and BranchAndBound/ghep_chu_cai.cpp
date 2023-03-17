#include<bits/stdc++.h>
using namespace std;

int check(char *p, int n){
	for(int i = 1 ; i < n-1 ; i ++) {
		if(  ( p[i] == 'A' && p[i-1] != 'E' && p[i+1] != 'E' && ( p[i-1] != 'A' && p[i+1] != 'A' ))
		 ||  ( p[i] == 'E' && p[i-1] != 'A' && p[i+1] != 'A' && ( p[i-1] != 'E' && p[i+1] != 'E' )) ) return 0;
	}
	return 1;
}

void show(char *p, int n){
	for(int i = 0 ; i < n; i++){
		cout << p[i];
	}
	cout << endl;
}

int main(){
	char charvalue;
	char p[1000], h = 0;
	cin >>charvalue;
	for(char i = 'A' ; i <= charvalue ; i++) {
		p[h++] = i;
	}
	do{
		if(check(p, h))
		show(p, h);		
	}while(next_permutation(p, p+h))
	;

}
