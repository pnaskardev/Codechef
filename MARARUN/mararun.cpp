#include<iostream>
#include<string>
#include<bits/stdc++.h>
#define int long long int
using namespace std;

int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int D,d,a,b,c;
        cin>>D>>d>>a>>b>>c;
        int km=D*d;
        int cat[3]={10,21,42};
        int pr[3]={a,b,c};
        vector<int>won(1,0);
        for(int i=0;i<3;i++)
        {
            if(km>=cat[i])
            {
                won.push_back(pr[i]);
            }
        }
        sort(won.begin(),won.end());
        cout<<won[won.size()-1]<<endl;
    }
}