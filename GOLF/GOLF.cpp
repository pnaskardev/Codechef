#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main(void)
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,x,k;
        cin>>n>>x>>k;
        ll onwflag=0;//onwards flag 
        ll backflag=0;//backwards flag
        //for onward
        ll pointeronw=0;//points where the ball is 
        ll tileonw=0;
        if(x%k==0)
        {
            onwflag=1;
            backflag=1;
        }
        while(tileonw<n+1)
        {
            pointeronw;
            tileonw=pointeronw*k;
            pointeronw++;
            if(x==tileonw)
            {
                onwflag=1;
            }
        }
        //for backward
        ll pointerbck=0;
        ll tilebck=n+1;
        while(tilebck>0)
        {
            tilebck=n+1-pointerbck*k;
            pointerbck++;
            if(x==tilebck)
            {
                backflag=1;
            }
        }
        if(onwflag==1||backflag==1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}