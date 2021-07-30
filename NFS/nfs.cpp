#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        float u,v,a,s,ans=0;
        cin>>u>>v>>a>>s;
        if(v*v>=u*u-2*a*s)
        {
            cout<<"Yes"<<endl;
        }
        else 
        {
            cout<<"No"<<endl;
        }
    }
}