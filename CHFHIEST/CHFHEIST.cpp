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
    int D,d,p,q;
    cin>>D>>d>>p>>q;
    int n=D/d;
    int ans;
    if(n%2==0)
    {
        ans=d*((n/2)*(2*p+(n-1)*q));
    }
    else 
    {
        ans=d*(n*(p+((n-1)/2)*q));
    }
    ans=ans+(D%d)*(p+(n)*q);
    cout<<ans<<endl;
}