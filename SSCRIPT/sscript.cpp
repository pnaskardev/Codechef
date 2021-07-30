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
    int n,k,flag=0,counter=0,maxcount=0,ans;
    cin>>n>>k;
    string s;
    cin>>s; 
    for(int i=0;i<n;i++)
    {
        if(flag==0 && s[i]=='*')
        {
            counter++;
            flag=1;
        }
        else if(flag==1&&s[i]=='*')
        {
            counter++;
        }
        if(flag==1&&s[i]!='*')
        {
           
            flag=0;
            if(counter<k)
            {
                counter=0;
            }
        }
        
    }
    if(counter>=k)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}