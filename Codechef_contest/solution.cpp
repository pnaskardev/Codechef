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
    int n;
    double b;
    cin>>n>>b;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum=0;
    for(auto i:arr)
    {
        sum+=i;
    }
    double ans=0;
    if(sum>1000)
    {
        ans=sum-sum*0.01;
    }
    else
    {
        ans=sum;
    }
    if(ans>b)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
}