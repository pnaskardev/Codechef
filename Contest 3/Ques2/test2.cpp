#include<iostream>
#include<bits/stdc++.h>
#define int long long int
using namespace std;
const int minim=-1e4;
const int maxim=1e5;
void solve();
int32_t main(void)
{
    // int t;
    // cin>>t;
    // while(t--)
    // {
    //     solve();
    // }
    solve();
}
void solve()
{
     srand(time(0));
     for(int i=0;i<200;i++)
    {
        cout<<rand() % maxim + minim<<" "; 
    }
    cout<<endl;
}