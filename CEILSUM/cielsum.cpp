#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int fun1(int b,int x)
{
    return ceil((b-x)/2.0);
}
int fun2(int a,int x)
{
    return ceil((x-a)/2.0);
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
    int a,b;
    cin>>a>>b;
    int ans=0;
    if(a==b)
    {
        ans=0;
    }
    else if( (a%2==0 && b%2==0)||(a%2!=0 && b%2!=0))
    {
        int ans1,ans2;
        int x=(a+b)/2;
        ans1=fun1(b,x)+fun2(a,x);
        ans2=fun1(b,x+1)+fun2(a,x+1);
        ans=max(ans1,ans2);
    }
    else if((a%2==0 && b%2!=0)||(a%2!=0 && b%2==0))
    {
        int x=(a+b)/2;
        ans=fun1(b,x)+fun2(a,x);
    }
    /*for(int i=min(a,b);i<=max(a,b);i++)
    {

    }*/ 
    cout<<ans<<endl;
}