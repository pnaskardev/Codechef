#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int t,n;
    int x,y,z;
    do
    {
        cin>>t;
    } while (t>5||t<1);
    
    while (t--)
    {
        cin>>n;
        long long array[n];
        for(int i=0;i<n;i++)
        {
            cin>>array[i];
        }
        sort(array,array+n);
        long long min=array[0];
        long long max=array[n-1];
        long long answer=2*(max-min);
        cout<<answer<<endl;
    }
    
}