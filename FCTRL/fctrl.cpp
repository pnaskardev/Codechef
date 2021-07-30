#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int test;
    cin>>test;
    long long number,counter;
    counter=0;
    while(test--)
    {
         cin>>number;
        while(number/5!=0)
        {
            long long n=number/5;
            counter=counter+n;
            number=number/5;
        }
        cout<<counter<<endl;
        counter=0;
    }
    
}