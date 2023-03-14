#include <bits/stdc++.h> 
using namespace std; 

void ktra(int n, char first, char second, char third){ 
		if(n == 1){ 
			cout << first << " -> " << third << endl; 
			return; 
		} 
		
		ktra(n -1 , first, third, second); 
		cout<< first << " -> " << third << endl; 
		
		ktra( n - 1, second, first, third); 
}

int main(){ 
	int n; 
	cin>>n; 
	ktra(n, 'A', 'B', 'C'); 
}
