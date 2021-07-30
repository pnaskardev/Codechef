#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    long long A,B;
    cin>>A>>B;
    if(A>B)
    {
        return -1;
    }
    long long sum=A+B+1;
    cout<<sum<<endl;;
}