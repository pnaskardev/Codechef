#include<bits/stdc++.h>
#include<iostream>
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
    int n,m,counter=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if((m%i)%j==(m%j)%i)
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
}
