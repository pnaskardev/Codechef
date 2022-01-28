#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
void solve();
int32_t main(void)
{
    solve();
}
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int o=0,e=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(auto i:a)
    {
        if(i%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    
    cout<<o<<" "<<e<<endl;
 
}