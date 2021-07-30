#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
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
    int a,y,x;
    cin>>a>>y>>x;
    int sum;
   if(a>=y)
   {
       sum=a*x;
   }
   else
   {
       sum=a*x+1;
   }
   cout<<sum<<endl;
}