#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int fun(int energy,int k,int n)
{
    return energy/(pow(k,n));
}
int binary(int energy,int k,int target)
{
    int start=0,end=10e9,ans;
    while(start<=end)
    {
        int mid=(start+end)/2;
        if(fun(energy,k,mid)==0)
        {
            ans=mid;
            end=mid-1;
        }
        else if(fun(energy,k,mid)>0)
        {
            start=mid+1;
        }
        //cout<<" fun()->"<<fun(energy,k,mid)<<" start->"<<start<<" end->"<<end<<" ans->"<<ans<<endl;
    }
    return ans;
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
    int e,k;
    cin>>e>>k;
    int ans=binary(e,k,0);
    cout<<ans<<endl;
}