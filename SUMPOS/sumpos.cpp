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
        int x,y,z;
        cin>>x>>y>>z;
        if(x==y+z)
        {
            cout<<"YES"<<endl;
        }
        else if(y==x+z)
        {
            cout<<"YES"<<endl;
        }
        else if(z==x+y)
        {
            cout<<"YES"<<endl;
        }
        else 
        {
            cout<<"NO"<<endl;
        }
    }
}