#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
    int count1=0,count2=0;
    vector<int>player1,player2;
    for(int i=0;i<3;i++)
    {
        int t;
        cin>>t;
        player1.push_back(t);
    }
    for(int i=0;i<3;i++)
    {
        int t;
        cin>>t;
        player2.push_back(t);
    }
    for(int i=0;i<3;i++)
    {
        if(player1[i]>player2[i])
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    if(count1>count2)
    {
        cout<<"A"<<endl;
    }
    else
    {
        cout<<"B"<<endl;
    }
}