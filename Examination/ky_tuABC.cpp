#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
using namespace std;

void generateString(string s, int n, int na, int nb, int nc) {
    if (na > n || nb > n || nc > n) {
        return;
    }
    if (s.length() == n) {
        if (na <= nb && nb <= nc && na > 0 && nb > 0 && nc > 0) {
            cout << s << endl;
        }
        return;
    }
    generateString(s + 'A', n, na + 1, nb, nc);
    generateString(s + 'B', n, na, nb + 1, nc);
    generateString(s + 'C', n, na, nb, nc + 1);
}

int main() {
    int n;
    cin >> n;
    f(i, 3, n){
    generateString("", i, 0, 0, 0);    	
	}
}
