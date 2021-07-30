#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
#define mod 1000000007
int power(int a,int b);
int generate_chefora(int a);
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
    int l,r;
    cin>>l>>r;
    int base=generate_chefora(l);
    int sum=0;
    for(int i=l+1;i<=r;i++)
    {
        sum=sum+generate_chefora(i);
    }
    cout<<power(base,sum)<<endl;
}
int power(int a,int b)
{
    a%=mod;
    long long res=1;
    while(b>0)
    {
        if(b&1)
            res=res*a%mod;
        a=a*a%mod;
        b>>=1;    
    }
    return res;
}
int generate_chefora(int a)
{
    int temp=a;
    string s=to_string(temp);
    temp=temp/10;
    string temp1=to_string(temp);
    reverse(temp1.begin(),temp1.end());
    s=s+temp1;
    int res=stoi(s);
    int rem=res%10;
    if(rem==0)
    {
        res=res/10;
    }
    return res;
}
