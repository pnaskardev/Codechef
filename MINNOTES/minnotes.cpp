#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int 
const int N=1e6;
int32_t main(void)
{
    int t;
    cin>>t;
    while (t--)
    {
        int arr[N];
        int left[N];
        int right[N];
        int n,sum=0;
        cin>>n;
        for(int i=1;i<n+1;i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n+1);
        cout<<endl;
        left[1]=arr[1];
        right[n]=arr[n];
        for(int i=n-1;i>0;i--)
        {
            right[i]=__gcd(right[i+1],arr[i]);
        }
        for(int i=2;i<n+1;i++)
        {
            left[i]=__gcd(left[i-1],arr[i]);
        }   
        for(int i=1;i<n+1;i++)
        {
            sum=sum+arr[i];
        }
        cout<<"sum="<<sum<<endl;
        int ans=LLONG_MAX;
        for(int i=1;i<n+1;i++)
        {
            int current=(sum-arr[i]+__gcd(left[i-1],right[i+1]))/__gcd(left[i-1],right[i+1]);
            if(current<ans)
            {
                ans=current;
            }
        }
        cout<<ans<<endl;
    }
    
}