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
    int a,b,c,p,q,r;
    cin>>a>>b>>c>>p>>q>>r;
    int city1=p-a;
    int city2=q-b;
    int city3=r-c;
    int total_votes=p+q+r;
    int favor=a+b+c;
    if(favor>total_votes/2)
    {
        cout<<"YES"<<endl;
        return;
    }
    int maxim=(max(max(city1,city2),city3));
    if(maxim==city1)
    {
        a=p;
    }
    else if(maxim==city2)
    {
        b=q;
    }
    else
    {
        c=r;
    }
    favor=a+b+c;
    if(favor>total_votes/2)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
}