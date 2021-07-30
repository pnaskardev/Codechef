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
    int n,temp;
    cin>>n;
    int i=0;
    temp=n;
    int arr[n]={0,0};
    while(n--)
    {
        string s;
        cin>>s;
        if(check(s)==true)
        {
            arr[i]=1;
            i++;
        }
        else
        {
            arr[i]=0;
            i++;
        }
    }
    int flag=0;
    for(int k=0;k<temp;k++)
    {
        if(arr[k]==0)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
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