#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void solve();
int main(void)
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
    int x,y;
    cin>>x>>y;
    int sum=x+y;
    float prob;
    if(sum>6)//the combined sum is either equal to or greater than 6 so no outcome will make the third person win 
    {
        cout<<0<<endl;
    }
    else //the sum is smaller than 6 so there is a probability that the third person may win 
    {
        prob=float(float(6-sum)/float(6));
        cout<<prob<<endl;
    }
    
}