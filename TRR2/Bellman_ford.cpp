#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
#define sz size()
#define pb(x) push_back(x)

using namespace std;
int MAX = 100, MAXC = 100000;
int c[100][100], d[100], truoc[100];
int n, m, s, f;

void show(int k){
	if(k == s){
		cout << endl;
		return;
	} 
	cout << " <-- " << truoc[k] ;
	return show(truoc[k]);
}

void Bellman_ford(int s){
	d[s] = 0;
	f(k, 1, n-2){
		f(v, 1, n){
			f(u, 1, n){
				if(d[v] > d[u] + c[u][v]){
					d[v] = d[u] + c[u][v];
					truoc[u] = v;
				}
			}
		}
	}
	f(i, 1, n){
		if(d[i] == MAXC) cout << "Khong co lo trinh!";
		else{
			cout << "Duong di toi dinh " << i << " co do dai: " << d[i] << ' ' << "va co lo trinh: " << i;
			show(i);			
		}

	} 
}



int main() {
	cout << "Nhap so dinh: ";
	cin >> n;
	cout << "Nhap so cap canh: ";
	cin >> m;
	cout << "Nhap so dinh bat dau: ";
	cin >> s;
	f(i, 1, n){
		f(j, 1, n){
			if(i == j) c[i][j] = 0;
			else c[i][j] = MAXC;
		}
	}
	
	f(i, 1, m){
		int u, v;
		cin >> u >> v >> c[u][v];
	}
	
	f(i, 1, n){
		d[i] = c[s][i];
		truoc[i] = s;
	}
	
	Bellman_ford(s);
	
}

//5 9 1
//1 2 1
//1 5 3
//2 3 3
//2 4 3
//2 5 8
//3 4 1
//3 5 -5
//4 3 2
//5 4 4


