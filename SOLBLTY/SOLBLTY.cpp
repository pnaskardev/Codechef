#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        ll x,a,b;
        cin>>x>>a>>b;
        ll ans=a+(100-x)*b;
        ans=ans*10;
        cout<<ans<<endl;
    }
}