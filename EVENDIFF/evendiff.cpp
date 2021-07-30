//difference of odd and odd is always even 
//difference of even and even is always even
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
        int n,even=0,odd=0,ans=0;
        cin>>n;
        vector<int>arr;
        for(int i=0;i<n;i++)
        {
            int temp;
            cin>>temp;
            arr.push_back((temp));
        }
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            if(arr[i]%2!=0)
            {
                odd++;
            }
        }
        cout<<min(odd,even)<<endl;
    }
}