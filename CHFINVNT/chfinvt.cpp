#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int res(int n,int k)
{
    return ((((n-1))/k)*k);
}
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
    int n,p,k;
    cin>>n>>p>>k;
    int sum=0,counter=0;
    int limit=p%k;
    limit--;
    sum=sum+res(n,k);
    sum=n-1-sum;
    if(limit>sum)
    {
        counter+=(sum+1)*((n-1)/k+1)+(limit-sum)*((n-1)/k);
    }
    else 
    {
        counter+=((n-1)/k+1)*(limit+1);
    }
    for(int i=limit+1;i<=n-1;i=i+k)
    {
        counter++;
        if(i==p)
        {
            cout<<counter<<endl;
            goto endprog;
        }
    }
    endprog:;
}   