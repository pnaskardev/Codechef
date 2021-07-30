#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(void)
{
    int t,maxrating;
    cin>>t;
    while(t--)
    {
        maxrating=INT_MIN;
        int n,x,s,r;
        cin>>n>>x;
        while(n--)
        {
            cin>>s>>r;
            if(s<=x)
            {
                maxrating=max(r,maxrating);
            }
        }
        cout<<maxrating<<endl;
    }
}