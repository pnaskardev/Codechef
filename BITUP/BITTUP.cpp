#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define mod 1000000007
void solve();
int power(int a,int b);
int32_t main(void)
{
    int t;
    cin>>t;   
    while(t--)
    {
        solve();
    }
}
int power(int a,int b)
{
    a %= mod;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    int base=power(2,n)-1;
    int ans=power(base,m);
    cout<<ans<<endl;
}