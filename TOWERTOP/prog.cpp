#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int power(int a);
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int x,m;
    cin>>x>>m;
    int ans=power(x);
    cout<<"ans->"<<ans<<endl;
    if(ans<=m)
    {
        cout<<m-ans+1<<endl;
        return;
    }
    cout<<0<<endl;
}
int power(int a)
{
    int ans=0;
    for(int i=0;i<32;i++)
    {
        if((1<<i)==a)
        {
            return i+1;
        }
        if(((i<<i)&a)==(i<<i))
        {
            if(a==i)
            {
                ans=i;
            }
            else 
            {
                ans=i+1;
            }
        }
    }
    return ans+1;
}