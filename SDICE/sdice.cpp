#include<bits/stdc++.h>
#include<iostream>
#define int long long int
using namespace std;
int32_t main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        long long sum=0;
        sum=(n/4)*44;
        int rem=(n%4);
        if(n>=4)
        {
            if(rem==0)
            {
                sum=sum+16;
            }
            if(rem==1)
            {
                sum=sum+32;
            }
            if(rem==2)
            {
                sum=sum+44;
            }
            if(rem==3)
            {
                sum=sum+55;
            }
            cout<<sum<<endl;
        }
        else
        {
            int res;
            if(rem==1)
            {
                res=20;
            }
            if(rem==2)
            {
                res=36;
            }
            if(rem==3)
            {
                res=51;
            }
            if(rem==4)
            {
                res=60;
            }
            cout<<res<<endl;
        }
    }
}
