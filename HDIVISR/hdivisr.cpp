#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(void)
{
    long long n,max;
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        if(n%i==0)
        {
            max=i;
        }
    }
    cout<<max<<endl;
}