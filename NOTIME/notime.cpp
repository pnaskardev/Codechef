#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int N,H,X;
    cin>>N>>H>>X;
    int array[N];
    int possible=0;
    for(int i=0;i<N;i++)
    {
        cin>>array[i];
        
    }
    sort(array,array+N);
    if((X+array[N-1]>=H))
        {
            possible=1;
        }
        else
        {
            possible=0;
        }
    if(possible==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}