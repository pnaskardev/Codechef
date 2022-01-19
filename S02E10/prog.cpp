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
    int n,x,k;
    cin>>n>>x>>k;
    vector<int>a(n);   
    vector<int>b(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    int counter=0;
    for(int i=0;i<n;i++)
    {
        if(abs(a[i]-b[i])<=k)
        {
            counter++;
        }
    }
    if(counter>=x)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}