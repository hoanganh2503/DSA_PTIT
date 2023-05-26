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
int n,m;
int a[505][505];
int dx[8] = {-1,-1,-1,0,0,1,1,1};
int dy[8] = {1,0,-1,-1,1,-1,0,1};

void DFS(int i, int j){
    a[i][j] = 0;
    f(k, 0, 7){
        int xi = i + dx[k];
        int yi = j + dy[k];
        if(xi>=1 && xi<=n && yi>=1 && yi<=m &&a[xi][yi]==1){
            a[xi][yi] = 0;
            DFS(xi,yi);
        }
    }
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        f(i, 1, n){
            f(j, 1, m) cin>>a[i][j];
        }
        int cnt=0;
        f(i, 1, n){
            f(j, 1, m){
                if(a[i][j] == 1){
                    DFS(i,j);
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;
    }
}