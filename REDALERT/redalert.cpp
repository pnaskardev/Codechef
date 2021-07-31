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
    int n,d,h;
    cin>>n>>d>>h;
    int arr[n];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    arr[0]=0;
    int sum=0,counter=0;
    for(int i=1;i<=n;i++)
    {
        if(arr[i]>0)
        {
            sum=sum+arr[i];
        }
        else if(arr[i]==0)
        {
            if(sum<d)
            {
                sum=0;
            }
            else if(sum>=d)
            {
                sum=sum-d;
            }
            
        }
        if(sum>h)
        {
            counter++;
        }
    }
    if(counter>=1)
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
}