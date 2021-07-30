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
        bool rejected=false,slow=false,bot=true;
        int n,k;
        unordered_map<int,int>m;
        cin>>n>>k;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back((temp));
            m[arr[i]]++;
        }
        int unsolved=m[-1];
        int solved=n-unsolved;
        if((float)solved<ceil(n/2.0))
        {
            rejected=true;
            bot=false;
        }
        if(rejected==false)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]>k)
                {
                    slow=true;
                    bot=false;
                }
            }
        }
        if(rejected==false&&slow==false)
        {
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=1&&arr[i]!=0)
                {
                    bot=false;
                }
            }
        }
        if(rejected==false&&slow==false&&bot==false)
        {
            cout<<"Accepted"<<endl;
        }
        else if(rejected==true||slow==false&&bot==false)
        {
            cout<<"Rejected"<<endl;
        }
        else if(rejected==false&&slow==true&&bot==false)
        {
            cout<<"Too Slow"<<endl;
        }
        else if(rejected==false&&slow==false&&bot==true)
        {
            cout<<"Bot"<<endl;
        }
    }
}