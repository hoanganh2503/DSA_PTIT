#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define memset(arr, n) memset(arr, n, sizeof(arr));
#define all(x) x.begin(), x.end()
using namespace std;


int main(){
    string s; cin>>s;
    int n = s.length();
    int arr[n];
    F(i, 0, n){
        arr[i]=1;
        for(int j=0;j<i;j++){
            if(s[j] <= s[i]) arr[i]=max(arr[i],arr[j]+1);
        }
    }
    cout<<*max_element(arr,arr+n)<<endl;
    return 0;
}
