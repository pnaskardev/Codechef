#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int sum(int integer);
int main(void)
{
    int test,integer;
    cin>>test;
    while(test--)
    {
        cin>>integer;
        cout<<sum(integer)<<endl;
    }
}
int sum(int integer)
{
    int temp,sum;
    sum=0;
    temp=integer;
    while(temp>0)
    {
        sum=sum+temp%10;
        temp=temp/10;
    }
    return sum;
}