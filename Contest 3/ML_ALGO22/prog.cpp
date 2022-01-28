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
    int low=0,upper=0;
    for(auto i:s)
    {
        if(i>='a' && i<='z')
        {
            low++;
        }
        if(i>='A' && i<='Z')
        {
            upper++;
        }
    }  
    if(upper>low)
    {
        for(int i=0;i<s.size();i++)
        {
            if(islower(s[i]))
            {
                s[i]=toupper(s[i]);
            }
        }
    }
    if(low>upper)
    {
       for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
        } 
    }
    if(upper==low)
    {
       for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            {
                s[i]=tolower(s[i]);
            }
        }  
    }
    cout<<s<<endl;
}