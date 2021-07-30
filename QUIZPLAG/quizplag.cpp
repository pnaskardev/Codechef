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
        int n,m,k;
        cin>>n>>m>>k;
        int arr[n+m+1];
        memset(arr,0,sizeof(arr));
        for(int i=1;i<=k;i++)
        {   
            int id;
            cin>>id;
            arr[id]++; 
        }
        vector<int>ans;
        for(int i=1;i<=n;i++)
        {
            if(arr[i]>1)
            {
                ans.push_back(i);
            }
        }
        cout<<ans.size()<<" ";
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}