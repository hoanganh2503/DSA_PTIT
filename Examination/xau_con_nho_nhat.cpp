#include<bits/stdc++.h>
 
using namespace std;
int minstr(string s){
    unordered_set<char> charSet;
    for(char c: s){
        charSet.insert(c);
    }
    int len = charSet.size();
    int n = s.length();
    unordered_map<char,int> fre;
    int bd = 0;
    int kt = 0;
    int min_len = INT_MAX;
    while(kt < n){
        fre[s[kt]]++;
        while(fre.size() == len){
            min_len = min(min_len,kt-bd+1);
            fre[s[bd]]--;
            if(fre[s[bd]]==0){
                fre.erase(s[bd]);
            }
            bd++;
        }
        kt++;
    }
    return min_len;
}
int main(){
    int t; cin>>t;
    while(t--){
        string s; cin>>s;
        int min_len = minstr(s);
        cout<<min_len<<endl;
    }
}