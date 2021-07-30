#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
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
    int n,m;
    cin>>n>>m;
    int city[n],pass[m];
    for(int i=0;i<n;i++)
    {
        cin>>city[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>pass[i];
    }
    map<int,int>mp;
    int MAX=1e9;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            mp[i]=0;
        }
        else if(city[i]!=0) 
        {
            mp[i]=0;
        }
        else
        {
            mp[i]=MAX;
        }
    }
    int right=-1;
    for(int i=0;i<n;i++)
    {
        if(city[i]==1)
        {
            right=i;
        }
        if(right!=-1)
        {
            if(city[i]==0)
            {   
                mp[i]=min(mp[i],i-right);
            }
        }
    }

    int left=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(city[i]==2)
        {
            left=i;
        }
        if(left!=-1)
        {
            if(city[i]==0)
            {   
                mp[i]=min(mp[i],left-i);
            }
        }
    }

    for(int i=0;i<m;i++)
    {
        int dest=pass[i]-1;
        if(mp[dest]!=MAX)
        {
            cout<<mp[dest]<<" ";
        }
        else
        {
            cout<<-1<<" ";
        }
    }
    cout<<endl;
}