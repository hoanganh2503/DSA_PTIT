#include<bits/stdc++.h>

using namespace std;

#define mp make_pair
#define fi first
#define se second
#define pb push_back
#define sz size()
#define ll long long
#define FOR(i, a, b) for(int i = a; i <= b; i++)
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define FD(i, a, b) for(int i = a; i > b; --i)
#define faster() ios_base::sync_with_stdio(0); cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()
 
int main()
{
    faster();
    vll v;
    ll tmp = 9;
    v.pb(tmp);
    while(tmp * 10 <= 9000000999999)
    {
        int s = v.sz;
        tmp *= 10;
        v.pb(tmp);
        F(i, 0, s) v.pb(tmp + v[i]);
    }
    int t = 1, n, k, x;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int idx = 0;
        while(v[idx] % n) ++idx;
        cout << v[idx] << endl;
    }
    return 0;
}