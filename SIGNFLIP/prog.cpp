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
       int n,k;
       cin>>n>>k;
       vector<int>arr(n);
       for(int i=0;i<n;i++)
       {
           cin>>arr[i];
       }
       sort(arr.begin(),arr.end());
       int sum=0;
       for(int i=0;i<k;i++)
       {
           if(arr[i]<0)
           {
               sum+=abs(arr[i]);
           }
       }
       for(int i=0;i<n;i++)
       {
           if(arr[i]>0)
           {
               sum+=arr[i];
           }
       }
       cout<<sum<<endl;
}