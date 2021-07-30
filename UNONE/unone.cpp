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
    vector<int>arr;
    vector<int>odd,even;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        arr.push_back(t);
        if((t%2)==0)
        {
            even.push_back(t);
        }
        else
        {
            odd.push_back(t);
        }
    }
    for(int i=0;i<even.size();i++)
    {
        cout<<even[i]<<" ";
    }
    for(int i=0;i<odd.size();i++)
    {
        cout<<odd[i]<<" ";
    }
    cout<<endl;
}