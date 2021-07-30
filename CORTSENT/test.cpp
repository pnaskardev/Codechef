#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool check(string s);
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
    int n;
    cin>>n;
    bool ans=true;
    while(n--)
    {
        bool first=false,second=false;
        string s;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            if('a'<=s[i]&&s[i]<='m')
            {
                first=true;
            }
            else if('N'<=s[i]&&s[i]<='Z')
            {
                second=true;
            }
            else
            {
                ans=false;
            }
            if(first==true && second==true)
            {
                ans=false;
            }
        }
    }
    if(ans==true)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
bool check(string s)
{
    pair<int,int>p={0,0};
    for(int i=0;i<s.size();i++)
    {
        if('a'<=s[i]&&s[i]<='m')
        {
            p.first++;
        }
        else if('N'<=s[i]&&s[i]<='Z')
        {
            p.second++;
        }
    } 
    if(p.first>0 && p.second>0)
    {
        return false;
    }
    else if((p.first>0&&p.second==0)||(p.second>0&&p.first==0))
    {
        return true;
    }
    else if(p.first==0&&p.second==0)
    {
        return false;
    }
    else
    {
        return false;
    }
}