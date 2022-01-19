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
    if(n<9)
    {
        cout<<n+k<<endl;
        return;
    }
    int temp=n;
    vector<int>arr;
    while(temp>0)
    {
        arr.push_back(temp%10);
        temp=temp/10;
    }
    sort(arr.begin(),arr.end());
    int s=arr.size()-1;
    int maxim=arr[s];
    for(int i=s-1;i>=0;i--)
    {
        if(k>=(abs(maxim-arr[i])))
        {
            k-=abs(maxim-arr[i]);
            arr[i]+=abs(maxim-arr[i]);
        }
        else
        {
            s--;
            maxim=arr[s];
            if(k>=(abs(maxim-arr[i])))
            {
                k-=abs(maxim-arr[i]);
                arr[i]+=abs(maxim-arr[i]);
            }
        }
    }
    int ans=1;
    for(auto i:arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        ans=ans*arr[i];
    }
    cout<<ans<<endl;
}