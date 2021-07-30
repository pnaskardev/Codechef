#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,m,d;
        cin>>x>>m>>d;
        cout<<min(x*m,d+x)<<endl;
    }
}