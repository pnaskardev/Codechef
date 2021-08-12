#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
void solve()
{
   
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>q;
    int temp=m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        q.push_back(make_pair(x,y));
    }
    sort(q.begin(),q.end(),greater<pair<int,int>>());
    int lcm=1,rem=n,res=0;
    for(int i=0;i<m && rem>0;i++)
    {
        lcm=lcm*q[i].second/__gcd(lcm,q[i].second);
        res+=(rem-(n/lcm))*q[i].first;
        rem=n/lcm;
    }
    cout<<res<<endl;
}