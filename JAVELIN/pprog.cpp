#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}
int return_a(pair<int, int>gq)
{
    return gq.first;
}
int return_b(pair<int, int>gq)
{
    return gq.second;
}
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
    int n,m,x;
    cin>>n>>m>>x;
    vector<pair<int,int>>winners;
    queue<pair<int,int>>q;
    int win=0;
    vector<pair<int,int>>arr(n+1);
    arr[0].first=0;
    arr[0].second=0;
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i].first;
        arr[i].second=i;
    }
    sort(arr.begin(),arr.end());
    for(int i=arr.size()-1;i>0;i--)
    {
        if(arr[i].first>=m || winners.size()<x)
        {
            win++;
            winners.push_back(make_pair(arr[i].first,arr[i].second));
            arr[i].first=0;
        } 
    }
    if(win<x)
    {
        int req=x-win;
        sort(arr.begin(),arr.end());
        for(int i=0;i<=n;i++)
        {
            if(arr[i].first==0)
            {
                arr.erase(arr.begin()+i);
            }
        }
        for(int i=arr.size()-1;i>=0;i--)
        {
            q.push(make_pair(arr[i].first,arr[i].second));
        }
        while(win<x)
        {
            win++;
            winners.push_back(make_pair(return_a(q.front()),return_b(q.front())));
            q.pop();
        }
    }
    sort(winners.begin(),winners.end(),sortbysec);
    cout<<win<<" ";
    for(auto i:winners)
    {
        cout<<i.second<<" ";
    }
    cout<<endl;

}