#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int counter=0;
void cal(vector<int>&arr,int n);
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
    sort(arr.begin(),arr.end(),greater<int>());
    counter=0;
    cal(arr,n);
    cout<<counter<<endl;
}
void cal(vector<int>&arr,int n)
{
    int i=0;
    while(i<=n-1)
    {
        if(arr[i]<=0)
        {
            return;
        }
        else if(arr[i]>0)
        {
            arr[i]--;
            i++;
            counter++;
        }
        if(i==n)
        {
            cal(arr,n);
        }
    }
}