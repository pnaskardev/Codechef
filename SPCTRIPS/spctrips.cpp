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
    int n;
    cin>>n;
    int counter=0;
    for(int a=1;a<=n;a++)
    {
        for(int b=a;b<=n;b=b+a)
        {
            if(b%a==0)
            {
                for(int c=a;c<=n;c=c+b)
                {
                    if(c%b==a)
                    {
                        counter++;
                    }
                }
            }
        }
    } 
    cout<<counter<<endl;  
}