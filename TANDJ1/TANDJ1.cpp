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
    int a,b,c,d,k,space;
    cin>>a>>b>>c>>d>>k;
    space=abs(a-c)+abs(b-d);
    if(k>space&&(k-space)%2==0)
    {
        cout<<"YES"<<endl;
    }
    else if(space==k)
    {
        cout<<"YES"<<endl;
    }
    else if(k>space&&(k-space)%2!=0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}