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
    int a,b,c;
    cin>>a>>b>>c;
    int sum1=a+b,sum2=b+c,sum3=a+c;
    int max;
    if((sum1 >= sum2) && (sum1 >= sum3))
    {
        max=sum1;
    }
    else if ((sum2 >= sum1) && (sum2 >= sum3))
    {
        max=sum2;
    }
    else
    {
        max=sum3;
    }
    cout<<max<<endl;
}