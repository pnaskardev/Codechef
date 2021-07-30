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
    int d,c,sum1=0,sum2=0,sumafinal,sumbfinal;
    cin>>d>>c;
    vector<int>day1,day2;
    for(int i=0;i<=2;i++)
    {
        int t;
        cin>>t;
        day1.push_back(t);
    }
     for(int i=0;i<=2;i++)
    {
        int t;
        cin>>t;
        day2.push_back(t);
    }
    for(int i=0;i<=2;i++)
    {
        sum1=sum1+day1[i];
        sum2=sum2+day2[i];
    }
    int charge=0;
    if(sum1>=150 && sum2>=150)
    {
        charge=2;
    }
    else if(sum1>=150 || sum2>=150)
    {
        charge=1;
    }
    else
    {
        charge=0;
    }
    if(d*charge>c)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}