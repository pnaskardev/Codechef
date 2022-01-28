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
    cin>>n;
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
    if(sum%2==0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        // int k=floor(sum/2.0);
        // int l=ceil(sum/2.0);
        // if(abs(k-l)==1)
        // {
        //     cout<<"YES"<<endl;
        // }
        // else 
        // {
        //     cout<<"NO"<<endl;
        // }
        
    }
}