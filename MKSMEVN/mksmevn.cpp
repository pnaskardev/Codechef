#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long int
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,sum=0,even=0,odd=0,flag=0;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int t;
            cin>>t;
            arr.push_back(t);
            sum=sum+arr[i];
            if(t==2)
            {
                flag=1;
            }
            if(t%2==0)
            {
                even++;
            }
            else 
            {
                odd++;
            }
        }
        if(sum%2==0)
        {
            cout<<"0"<<endl;
        }
        else if(flag==1)
        {
            cout<<"1"<<endl;
        }
        else 
        {
            cout<<"-1"<<endl;
        }
    }
}