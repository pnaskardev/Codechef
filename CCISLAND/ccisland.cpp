#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        int survivingdays=min(x/xr,y/yr);
        if(survivingdays>=d)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        
    }
}