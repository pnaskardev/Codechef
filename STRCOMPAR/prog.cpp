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
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int counter=0;  
    bool bigger;
    bigger=b[n-1]>a[n-1];
    if(bigger)
    {
        counter++;
    }
    for(int i=n-2;i>=0;i--)
    {
        if(b[i]>a[i])
        {
            bigger=true;
            counter++;
        }
        else if(b[i]<a[i])
        {
            bigger=false;
        }
        else
        {
            if(bigger)
            {
                counter++;
            }
        }
    }
    cout<<counter<<endl;
}