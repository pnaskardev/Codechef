#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int reverse(int number)
{
    int reverse=0;
    while(number!=0)
    {
        int rem=number%10;
        reverse=reverse*10+rem;
        number=number/10;
    }
    return reverse;
}
int main(void)
{
    int test,number;
    cin>>test;
    while (test--)
    {
        cin>>number;
        cout<<reverse(number)<<endl;
    }
    
}