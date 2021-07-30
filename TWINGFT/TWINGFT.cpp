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
    vector<int>arr;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
    }
    sort(arr.begin(),arr.end());
    int totaltries=2*k,sum1=0,sum2=0;
    int pointer1=arr.size()-1;
    int pointer2=arr.size()-2;
    int chef1counter=0,chef2counter=0;
    while(chef1counter<k&&chef2counter<k&&pointer1>=0&&pointer2>=0)
    {
        //chef1 adding sum
        chef1counter++;
        sum1=sum1+arr[pointer1];
        pointer1=pointer1-2;
        //chef 2 adding
        chef2counter++;
        sum2=sum2+arr[pointer2];
        pointer2=pointer2-2;
        if(chef2counter==k)
        {
            sum2=sum2+arr[pointer2+1];
        }
    }
    cout<<max(sum1,sum2)<<endl;
}