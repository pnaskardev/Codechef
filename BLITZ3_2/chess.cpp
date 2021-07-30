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
    int n,a,b;
    cin>>n>>a>>b;
    int total_time=2*(180+n);
    int total_time_left=a+b;
    cout<<total_time-total_time_left<<endl;
}