#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    string s;
    cin>>s;
    if(s[0]!='1')
    {
        string s1="1";
        s.insert(0,s1);
    }
    else if(s[0]=='1')
    {
        string s1;
        s1="0";
        s.insert(1,s1);
    }
    cout<<s<<endl;
}