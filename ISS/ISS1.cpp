#include<bits/stdc++.h>
#include<iostream>
using namespace std;
#define ll long long int 
ll gcd(ll a,ll b);
int main(void)
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll k;
        cin>>k;
        ll elements=2*k;//number of elements
        ll sum=0;
        for(ll i=1;i<=elements;i++)
        {
            sum=sum+gcd(k+i*i,k+(i+1)*(i+1));
        }
        cout<<sum%1000000007<<endl;
    }
}
ll gcd(ll a, ll b)
{
    if(b==0)
    {   
        return a;

    }
    else 
    {
        return gcd(b,a%b);
    }
}