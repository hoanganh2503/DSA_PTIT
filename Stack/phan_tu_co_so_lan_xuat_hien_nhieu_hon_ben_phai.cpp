#include<bits/stdc++.h>
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
#define endl '\n'

using namespace std;
int t, n;
unordered_map<int, int> f;

void handle(){
	        cin >> n;
		f.clear();
		int a[n];
        for(int &i : a)
        {
            cin >> i;
            ++f[i];
        }
        stack<int> st;
        int res[n];
        res[n - 1] = -1;
        st.push(n - 1);
        for(int i = n - 2; ~i; --i)
        {
            if(st.sz and f[a[i]] < f[a[st.top()]])
            {
                res[i] = a[st.top()];
                st.push(i);
            }
            else
            {
                while(st.sz and f[a[i]] >= f[a[st.top()]]) st.pop();
                if(st.sz) res[i] = a[st.top()];
                else res[i] = -1;
                st.push(i);
            }
        }
        for(int &i : res) cout << i << ' ';
        cout << endl;
}

int main()
{
    faster();
    cin >> t;
    while(t--)
    {
		handle();
    }
    return 0;
}