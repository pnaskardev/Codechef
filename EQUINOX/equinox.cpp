#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        solve();
    }
        
}
void solve()
{
    string temp="EQUINOX";
    int flag=0;
    int n,a,b,sar=0,anu=0;
    cin>>n>>a>>b;
    while(n--)
    {
        string s;
        cin>>s;
        if(s[0]=='E'||s[0]=='Q'||s[0]=='U'||s[0]=='I'||s[0]=='N'||s[0]=='O'||s[0]=='X')
        {
            sar=sar+a;
        }
        else 
        {
            anu=anu+b;
        }
    }
    if(anu>sar)
    {
        cout<<"ANURADHA"<<endl;
    }
    else if(sar>anu)
    {
        cout<<"SARTHAK"<<endl;
    }
    else 
    {
        cout<<"DRAW"<<endl;
    }
}