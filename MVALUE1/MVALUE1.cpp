#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define int long long int
int ans(int a,int b)
{
    return a*b+max(a-b,b-a);
}
int32_t main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int ans1=ans(arr[n-1],arr[n-2]);
        int ans2=ans(arr[0],arr[1]);
        int ans3=ans(arr[n-1],arr[0]);
        cout<<max({ans1,ans2,ans3})<<endl;
    }
}