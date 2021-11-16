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
    int n=10;   
    vector<int>arr(11);
    arr[0]=0;
    for(int i=1;i<=10;i++)
    {
        cin>>arr[i];
    }
    int suma=0,sumb=0;
    for(int i=1;i<=9;i+=2)
    {
        if(arr[i]==1)
        {
            suma++;
        }
        
    }
    for(int i=2;i<=10;i+=2)
    {
       if(arr[i]==1)
       {
           sumb++;
       }
    }
    if(suma>sumb)
    {
        cout<<1<<endl;
    }
    else if(suma==sumb)
    {
        cout<<0<<endl;
    }
    else
    {
        cout<<2<<endl;
    }
    // cout<<endl;
    // for(auto i:arr)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
}