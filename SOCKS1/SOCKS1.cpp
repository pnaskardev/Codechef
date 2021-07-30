#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a==b||a==c||b==a||b==c||c==a||c==b)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}