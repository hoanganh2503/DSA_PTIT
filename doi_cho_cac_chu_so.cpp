#include<bits/stdc++.h>
#define fi first
#define se second
#define pb push_back
#define ll long long
#define FORD(i, a, b) for(int i = a; i >= b; i--)
#define F(i, a, b) for(int i = a; i < b; ++i)
#define vi vector<int>
#define vll vector<ll>
using namespace std;

string s;
int k;

void Try(string &ans, int l)
{
    if(!k) return;
    char tmp = s[l];
    F(i, l, s.length()) if(tmp < s[i]) tmp = s[i];
    if(tmp != s[l]) --k;
    FORD(i, s.length() - 1, l)
    {
        if (s[i] == tmp)
        {
            swap(s[l], s[i]);
            if(s.compare(ans) > 0) ans = s;
            Try(ans, l + 1);
            swap(s[l], s[i]);
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> k >> s;
        string ans = s;
        Try(ans, 0);
        cout << ans << endl;
    }
    return 0;
}
